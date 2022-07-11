#include<iostream>
using namespace std;

// 안나오는 숫자는?

int main() {

	int map[3][3];
	int dat[10] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> map[i][j];
			dat[map[i][j]] = 1;
		}
	}
	for (int i = 1; i < 10; i++) {
		if (!dat[i])
			cout << i << " ";
	}

	return 0;
}