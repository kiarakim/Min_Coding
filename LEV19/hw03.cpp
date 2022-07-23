#include<iostream>
using namespace std;

char map[4][5];
int directY[8] = { -1,-1,-1,0,0,1,1,1 };
int directX[8] = { -1,0,1,-1,1,-1,0,1 };
void explode(int y, int x);

int main() {


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++)
			map[i][j] = '_';
	}

	for (int i = 0; i < 2; i++) {
		int y, x;
		cin >> y >> x;
		explode(y, x);
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout << map[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}

void explode(int y, int x) {
	for (int i = 0; i < 8; i++) {
		int dy = y + directY[i];
		int dx = x + directX[i];

		if (dy < 0 || dx < 0 || dy >= 4 || dx >= 5)continue;
		map[dy][dx] = '#';
	}
}
