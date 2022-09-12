#include<iostream> 
using namespace std;

int tetris[5][4];

void bomb(int y) {
	for (int x = 0; x < 4; x++) {
		if (tetris[y][x] == 0) return;
	}

	for (int x = 0; x < 4; x++) {
		tetris[y][x] = 0;
		if (y > 0 && tetris[y - 1][x] == 1) {
			tetris[y - 1][x] = 0;
			tetris[y][x] = 1;
		}

	}
}

int main() {

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			cin >> tetris[y][x];
		}
	}

	for (int y = 0; y < 5; y++) {
		bomb(y);
	}

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) 
			cout << tetris[y][x] << ' ';
		cout << endl;
	}

	return 0;
}