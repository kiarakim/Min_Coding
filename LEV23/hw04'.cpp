#include<iostream>
using namespace std;
// ¼ıÀÚ transformation

int map[3][4] = {
	3,5,4,1,
	1,1,2,3,
	6,7,1,2
};

int tar[4];

void operate() {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			if (map[y][x] == tar[0])
				map[y][x] = tar[1];
			else if (map[y][x] == tar[1])
				map[y][x] = tar[2];
			else if (map[y][x] == tar[2])
				map[y][x] = tar[3];
			else if (map[y][x] == tar[3])
				map[y][x] = tar[0];
		}
	}
}

int main() {

	for (int i = 0; i < 4; i++)
		cin >> tar[i];

	operate();

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			cout << map[i][j] << ' ';
		cout << '\n';
	}

	return 0;
}