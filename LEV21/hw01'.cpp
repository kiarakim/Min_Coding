#include<iostream>
#include<cstdlib>
using namespace std;

int main() {

	char map[4][4];
	for (int i = 0; i < 4; i++)
		cin >> map[i];

	int ay, ax, by, bx;

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			if (map[y][x] == 'A') {
				ay = y;
				ax = x;
			}
			if (map[y][x] == 'B') {
				by = y;
				bx = x;
			}
		}
	}
	int res = abs(ay - by) + abs(ax - bx);
	cout << res;

	return 0;
}