#include<iostream>
#include<cstring>
using namespace std;

int a[3][3], b[3][3];
int cnt;

int compare() {
	// ��
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (a[y][x] != b[y][x])
				return 0;
		}
	}
	cnt++;
	return 1;
}

void rot() {
	// ȸ��
	int temp[3][3];
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			temp[2 - x][y] = a[y][x];
		}
	}
	memcpy(a, temp, 3 * 3 * 4); // a�� temp �־�

	int r = 0;
	while (r < 4) {
		if (compare() == 1) break;
		rot();
		r++;
	}
}

int main() {

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++)
			cin >> a[y][x];
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++)
			cin >> b[y][x];
	}

	rot();
	cout << cnt;

	return 0;
}