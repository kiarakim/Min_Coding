#include <iostream>
using namespace std;

// 레이더 만들기
int main() {
	char alpha[5][6] = { "ABCDE","FGHIJ","KLMNO","PQRST","UVWXY" };
	char c;
	int y, x;
	cin >> c;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (alpha[i][j] == c) {
				y = i - 2;
				x = j - 2;
			}
		}
	}

	cout << y << "," << x;

	return 0;
}