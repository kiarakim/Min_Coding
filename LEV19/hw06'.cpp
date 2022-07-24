#include<iostream>
using namespace std;

char map[3][5] = {
	"ABGK", "TTAB","ACCD"
};
char pattern[2][3];

int isExist(int y, int x);

int main() {

	for (int i = 0; i < 2; i++)
		cin >> pattern[i];

	int flag = 0;
	for (int y = 0; y <= 3 - 2; y++) {
		for (int x = 0; x <= 4 - 2; x++) {
			flag += isExist(y, x);
		}
	}

	if (flag == 0) cout << "미발견";
	else cout << "발견(" << flag << "개)";

}

int isExist(int y, int x) {

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (pattern[i][j] != map[i + y][j + x])
				return 0;
		}
	}
	return 1;
}