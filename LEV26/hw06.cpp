#include<iostream>
using namespace std;

int map[6][6] = { 0 };

int main() {

	int x, y;
	for (int i = 0; i < 6; i++) {
		cin >> x >> y;
		map[x][y]++;
	}

	int flag = 0;
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 6; x++) {
			if (map[y][x] > 1) {
				flag = 1;
				break;
			}
		}
	}

	if (flag == 1) cout << "중복된좌표발견";
	else cout << "중복없음";

	return 0;
}