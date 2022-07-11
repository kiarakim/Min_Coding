#include<iostream>
using namespace std;

// 블랙리스트
int main() {
	char town[3][3] = {
		{'C', 'D', 'A'},
		{'B', 'M', 'Z'},
		{'Q', 'P', 'O'}
	};

	char black[5];
	cin >> black;

	int dat[26] = { 0 };

	for (int i = 0; i < 4; i++) {
		dat[black[i] - 65]++;
	}

	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int p = town[i][j] - 65;
			if (dat[p])	cnt++;
		}
	}
	cout << cnt << "명";

	return 0;
}