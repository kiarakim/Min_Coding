#include<iostream>
using namespace std;

int cell[5][4];
int dirY[8] = { -1,-1,-1,0,0,1,1,1 };
int dirX[8] = { -1,0,1,-1,1,-1,0,1 };

int isStable(int y, int x);

int main() {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++)
			cin >> cell[i][j];
	}

	int flag = 1;
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			if (cell[y][x])
				flag = isStable(y, x);
			if (flag == 0) break;
		}
	}

	if (flag == 1) cout << "안정된 상태";
	else cout << "불안정한 상태";

	return 0;
}

int isStable(int y,int x) {
	for (int i = 0; i < 8; i++) {
		int dy = y + dirY[i];
		int dx = x + dirX[i];

		if (dy < 0 || dx < 0 || dy >= 5 || dx >= 4) continue;
		if (cell[dy][dx] == 1)
			return 0;
	}
	return 1;
}