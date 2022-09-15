#include<iostream>
#include<vector>
using namespace std;

vector<vector<char>> map;
int dirY[4] = { 0,1,0,-1 };
int dirX[4] = { 1,0,-1,0 };

void run(int n) {
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			if (map[y][x] >= 'A' && map[y][x] <= 'Z') {
				int dy = dirY[n] + y;
				int dx = dirX[n] + x;
				if (dy < 0 || dx < 0 || dy > 3 || dx > 2) continue;
				if (map[dy][dx] == '#') continue;
				if (map[dy][dx] >= 'A' && map[dy][dx] <= 'Z') continue;
				else {
					map[dy][dx] = map[y][x];
					map[y][x] = '_';
					break;
				}
			}
		}
	}
}

int main() {

	map.resize(4);
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			char a;
			cin >> a;
			map[y].push_back(a);
		}
	}

	for (int i = 0; i < 5; i++) {
		int n = i % 4;
		run(n);
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++)
			cout << map[y][x];
		cout << "\n";
	}

	return 0;
}