#include<iostream>
#include<vector>
#include<string>
using namespace std;

int ant[4][4];
int dirY[4] = {-1,1,0,0};
int dirX[4] = { 0,0,-1,1 };

int isSafe(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int dy = dirY[i] + y;
		int dx = dirX[i] + x;

		if (dy < 0 || dx < 0 || dy >= 4 || dx >= 4) continue;
		if (ant[dy][dx] == 1) return 0;
	}
	return 1;
}

int main() {

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++)
			cin >> ant[y][x];
	}

	int flag = 0;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (ant[y][x] == 1) {
				flag = isSafe(y, x);
				if (flag == 0) break;
			}
		}
		if (flag == 0) break;
	}

	if (flag == 1) cout << "안전한 상태";
	else cout << "위험한 상태";
	return 0;
}