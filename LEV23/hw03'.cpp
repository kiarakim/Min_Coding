#include<iostream>
using namespace std;
// 네모네모 더하기

int map[4][4];
int sum;

int main() {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cin >> map[i][j];
	}

	for (int y = 0; y < 3; y++) {
		sum = 0;
		for (int x = 0; x < 3; x++) {
			sum += map[y][x];
		}
		map[y][3] = sum;
	}
	
	for (int x = 0; x < 3; x++) {
		sum = 0;
		for (int y = 0; y < 3; y++) {
			sum += map[y][x];
		}
		map[3][x] = sum;
	}
	
	sum = 0;
	for (int y = 0; y < 3; y++) {
		sum += map[y][y];
	}
	map[3][3] = sum;

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++)
			cout << map[y][x] << ' ';
		cout << '\n';
	}

	return 0;
}