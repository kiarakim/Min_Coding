#include<iostream>
using namespace std;

int white[7][7] = {
	0,0,0,0,0,0,0,
	0,0,1,0,1,0,0,
	0,1,0,0,0,1,0,
	0,0,1,0,1,0,0,
	0,0,0,1,0,1,0,
	0,1,1,0,0,0,0,
	0,0,0,0,0,0,0
};
int  black[7][7] = {
	0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,
	0,0,1,0,1,0,0,
	0,0,0,1,0,0,0,
	0,0,1,0,0,0,0,
	0,0,0,0,0,0,0,
	0,0,0,0,0,0,0
};
int dirY[4] = { -1,1,0,0 };
int dirX[4] = { 0,0,-1,1 };

int isDead(int y, int x) {
	int cnt = 0;
	for (int i = 0; i < 4; i++) {
		int dy = y + dirY[i];
		int dx = x + dirX[i];

		if (white[dy][dx] == 1)
			cnt++;
	}
	if (cnt == 4)return 1;
	return 0;
}

int main() {

	int y, x;
	cin >> y >> x;

	white[y][x] = 1;
	int cnt = 0;

	for (int i = 2; i <= 4; i++) {
		for (int j = 2; j <= 4; j++) {
			if (black[i][j])
				cnt += isDead(i, j);
		}
	}
	cout << cnt;

	return 0;
}