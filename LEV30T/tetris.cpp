#include<iostream>
#include<Windows.h>
#include "block.h"
using namespace std;

// ���� ��ǥ(���ΰ� ��ǥ)
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

// �Լ� ���� -> �����Ϸ����� abc(); �������� ������. ������ ��ŷ�� �� �� ����ž�.
// void abc();

void print() {
	// 2�� for������ �� ���� ���
	// 0�κ��� ����,
	// 1�κ��� #���� ���

	system("cls"); // �� �����

	int buf[10][10];

	memcpy(buf, map, 10 * 10 * 4); // buf�� ī��

	// ����� buf�� ����. 4 * 4 �� �����ϴµ�, 0�� �κ� ����, 1�� �κи� ã�Ƽ� buf�� ���
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
			if (buf[y][x] == 1) cout << "��";
		} cout << "\n";
	}
}

void down() {
	if (isStack(dy + 1, dx) == 0) { // ��ϰ� ���� �Ȱ�ġ�� ��� ��
		dy++;
		return;
	}

	// ���� �������� ���� ������ ��ȭ���Ѿ� ��.
	// 1. ����� ������ �����Ѵ�.
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (block[y][x] == 0)continue;
			map[dy + y][dx + x] = 1;
		}
	}

	// 2. ���ο� ����� �غ��Ѵ�.
	setBlock();

	// 3. ���� ��ǥ�� �ٽ� 0, 3���� �ʱ�ȭ�Ѵ�.
	dy = 0;
	dx = 3;
}

int main() {
	
	setBlock(); // ������ ������� �ʱ� ����
	print();

	int tick = 0; // 1�ʸ��� ��������. �Ʒ� ���� ����.
	while (1) {


		if (GetAsyncKeyState(VK_UP) & 0x8001) {
			spin(); // spin�� �� �� �մ� ���� ������� ��.
			if (isStack(dy, dx) == 1) { // �� �� ���ȴµ� �� �վ��ٸ� ���󺹱�
				spin();
				spin();
				spin();
			}
			print();
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8001) { // ������ ���� �ֵ��� �� ���� ������� �ϱ� ������ ������. �Լ��� ���� ����.
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
		Sleep(100); // 0.1��
	}
	return 0;
}
