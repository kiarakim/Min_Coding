#include<iostream>
using namespace std;

int isSame(int y, int x);
char a[4][5] = { "ABAB","BTBT","KABK","KBTK" };
char b[2][3] = { "AB","BT" };

int main() {

	int cnt = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (isSame(y, x) == 1)
				cnt++;
		}
	}
	cout << cnt;
	return 0;
}

int isSame(int y, int x) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (b[i][j] != a[i + y][j + x])
				return 0;
		}
	}
	return 1;
}