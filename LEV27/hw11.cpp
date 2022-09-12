#include<iostream> 
using namespace std;

char map[4][4];
int dirY[8] = { -1,-1,-1,0,1,1,1,0 };
int dirX[8] = { -1,0,1,1,1,0,-1,-1 };

void protect(int y, int x) {
	map[y][x] = '#';
	
	for (int i = 0; i < 8; i++) {
		int dy = dirY[i] + y;
		int dx = dirX[i] + x;

		if (dy < 0 || dy >= 4 || dx < 0 || dx >= 4) continue;
		if (map[dy][dx] == '#') continue;
		map[dy][dx] = '@';
	}
}

int main() {

	for (int i = 0; i < 3; i++) {
		int y, x;
		cin >> y >> x;
		protect(y, x);
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (!map[y][x]) cout << '_';
			else cout << map[y][x];
		}
		cout << endl;
	}

	return 0;
}