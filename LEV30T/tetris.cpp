#include<iostream>
#include<Windows.h>
#include "block.h"
using namespace std;

// 시작 좌표(주인공 좌표)
int dy = 0;
int dx = 3;

int map[10][10] = {
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,1,1,
};

// 함수 선언 -> 컴파일러한테 abc(); 에러내지 말아줘. 어차피 링킹할 때 다 생길거야.
// void abc();

void print() {
	// 2중 for문으로 맵 전부 출력
	// 0부분은 띄어쓰기,
	// 1부분은 #으로 출력

	system("cls"); // 맵 지우기

	int buf[10][10];

	memcpy(buf, map, 10 * 10 * 4); // buf에 카피

	// 블록을 buf에 복사. 4 * 4 다 복사하는데, 0인 부분 빼고, 1인 부분만 찾아서 buf에 기록
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (block[y][x] == 0) continue;
			buf[dy + y][dx + x] = block[y][x];
		}
	}


	for (int y = 0; y < 10; y++) {
		for (int x = 0; x < 10; x++) {
			/*if (map[y][y] == 0) cout << ' ';
			else cout << '#';*/
			if (buf[y][x] == 0) cout << "  ";
			if (buf[y][x] == 1) cout << "▧";
		} cout << "\n";
	}
}

void down() {
	if (isStack(dy + 1, dx) == 0) { // 블록과 맵이 안겹치면 계속 가
		dy++;
		return;
	}

	// 만약 겹쳤으면 이제 맵으로 승화시켜야 함.
	// 1. 블록을 맵으로 박제한다.
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (block[y][x] == 0)continue;
			map[dy + y][dx + x] = 1;
		}
	}

	// 2. 새로운 블록을 준비한다.
	setBlock();

	// 3. 시작 좌표를 다시 0, 3으로 초기화한다.
	dy = 0;
	dx = 3;
}

int main() {
	
	setBlock(); // 랜덤한 블록으로 초기 세팅
	print();

	int tick = 0; // 1초마다 내려오게. 아래 구현 있음.
	while (1) {


		if (GetAsyncKeyState(VK_UP) & 0x8001) {
			spin(); // spin할 때 벽 뚫는 현상도 막아줘야 함.
			if (isStack(dy, dx) == 1) { // 한 번 돌렸는데 벽 뚫었다면 원상복구
				spin();
				spin();
				spin();
			}
			print();
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8001) { // 밑으로 가는 애들은 다 차면 없애줘야 하기 때문에 복잡함. 함수로 따로 빼자.
			down();
			print();
		}
		if (GetAsyncKeyState(VK_LEFT) & 0x8001) {
			if (isStack(dy, dx - 1) == 0) dx--;
			print();
			
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8001) {
			if (isStack(dy, dx + 1) == 0) dx++;
			print();
			
		}
		tick++;
		if (tick % 10 == 0) {
			down();
			print();
		}
		Sleep(100); // 0.1초
	}
	return 0;
}
