#include<iostream>
using namespace std;

int map[3][3];

int check(int y) {
	for (int x = 0; x < 2; x++) {
		if (map[y][x] != map[y][x + 1])
			return 0;
	}
	return 1;
}

int main() {

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> map[y][x];
		}
	}

	for (int y = 0; y < 3; y++) {
		if (check(y) == 1) cout << map[y][0] << "\n";
		else cout << 'x' << "\n";
	}
		

	return 0;
}