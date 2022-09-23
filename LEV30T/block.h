#include<iostream>
using namespace std;

// * �Լ����� : �Լ� ������ �������� ������. ��ŷ�ϸ� �� �־�.
// * extern : �������� �������� ������. ���� map�� tetris.cpp�� �����ϱ�. ��ŷ�ϸ� �� �־�.
extern int map[10][10];

int block[4][4] = {
	0,0,0,0,
	0,0,0,0,
	0,0,0,0,
	0,0,0,0
};

// ��� �ΰ�(�ʿ��ϸ� 7�� ���� ��)
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

	srand(time(0)); // �ð� �������� ������ ����
	
	//cout << rand() % 2; // �������̴ϱ� 2�� ������ ���� 0,1 �� �� �ϳ���.
	int r = rand() % 7;

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			block[y][x] = mobiles[r][y][x];
		}
	}
}

void spin() {
	// block�� 90�� ������ 
	int temp[4][4];
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			temp[x][3 - y] = block[y][x];
		}
	}
	// temp --> block. 2�� for��
	// �ѹ��� �������ִ� �Լ� ����.
	memcpy(block, temp, 4 * 16); // �����Ʈ �ʿ�? ��ĭ�� 4Byte�� 16ĭ ����

	void pull(); // �Լ��� �Ʒ��� ������ �������ִ� ��. 
	pull();
	
}

// block�� ���� ���� ����ֱ�.
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
	// block�� �� by,bx���ٰ� ������ ���� ��
	// �ʰ� block�� ��ġ��1, �Ȱ�ġ�� 0 ����

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (block[y][x] == 0) continue;

			int ty = by + y; // test�غ����ϴ� ��ǥ 
			int tx = bx + x;

			// �� �˻��ϴٰ�....
			if (map[ty][tx] == 1) return 1;
		}
	}
	return 0;
}