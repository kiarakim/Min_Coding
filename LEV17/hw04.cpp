#include<iostream>
using namespace std;

// offset���� ������ ã�ƶ�
int main() {
	char c[3][5] = { "ATKB", "CZFD", "HGEI" };
	char ch;
	int y, x;

	cin >> ch >> y >> x;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (c[i][j] == ch) {
				cout << c[i + y][j + x];
				break;
			}
		}
	}
	return 0;
}