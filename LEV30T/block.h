#include<iostream>
using namespace std;

// * 함수선언 : 함수 컴파일 에러내지 마세요. 링킹하면 다 있어.
// * extern : 전역변수 에러내지 마세요. 지금 map은 tetris.cpp에 있으니까. 링킹하면 다 있어.
extern int map[10][10];

int block[4][4] = {
	0,0,0,0,
	0,0,0,0,
	0,0,0,0,
	0,0,0,0
};

// 블록 두개(필요하면 7개 만들어도 됨)
int mobiles[7][4][4] = {
	{
		1,1,1,0,
		1,0,0,0,
		0,0,0,0,
		0,0,0,0
	},
	{
		1,1,0,0,
		1,1,0,0,
		0,0,0,0,
		0,0,0,0
	},
	{
		1,1,1,0,
		0,0,1,0,
		0,0,0,0,
		0,0,0,0
	},
	{
		1,1,1,1,
		0,0,0,0,
		0,0,0,0,
		0,0,0,0
	},
	{
		0,1,0,0,
		1,1,1,0,
		0,0,0,0,
		0,0,0,0
	},
	{
		1,1,0,0,
		0,1,1,0,
		0,0,0,0,
		0,0,0,0
	},
	{
		0,1,1,0,
		1,1,0,0,
		0,0,0,0,
		0,0,0,0
	},
};

void setBlock() {

	srand(time(0)); // 시간 기준으로 랜덤값 섞기
	
	//cout << rand() % 2; // 정수들이니까 2로 나누면 값은 0,1 둘 중 하나임.
	int r = rand() % 7;

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			block[y][x] = mobiles[r][y][x];
		}
	}
}

void spin() {
	// block을 90도 돌리기 
	int temp[4][4];
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			temp[x][3 - y] = block[y][x];
		}
	}
	// temp --> block. 2중 for문
	// 한번에 복사해주는 함수 있음.
	memcpy(block, temp, 4 * 16); // 몇바이트 필요? 한칸당 4Byte씩 16칸 복사

	void pull(); // 함수가 아래에 있으니 선언해주는 것. 
	pull();
	
}

// block을 왼쪽 위로 당겨주기.
void pull() {
	int minY = 99, minX = 99;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (block[y][x] == 0) continue;

			if (minY > y) minY = y;
			if (minX > x) minX = x;

		}
	}
	int temp[4][4] = { 0 };
	for (int y = minY; y < 4; y++) {
		for (int x = minX; x < 4; x++) {
			temp[y - minY][x - minX] = block[y][x];
		}
	}
	memcpy(block, temp, 4 * 16);
}

int isStack(int by, int bx) {
	// block을 맵 by,bx에다가 가져다 댔을 때
	// 맵과 block이 겹치면1, 안겹치면 0 리턴

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (block[y][x] == 0) continue;

			int ty = by + y; // test해봐야하는 좌표 
			int tx = bx + x;

			// 쭉 검사하다가....
			if (map[ty][tx] == 1) return 1;
		}
	}
	return 0;
}