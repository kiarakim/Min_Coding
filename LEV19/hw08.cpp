#include<iostream>
using namespace std;

int image[4][4];

int rectSum(int y, int x);

int main() {

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			cin >> image[i][j];
	}

	int max = 0, mY = 0, mX = 0;

	for (int i = 0; i <= 4 - 2; i++) {
		for (int j = 0; j <= 4 - 3; j++) {
			if (max < rectSum(i, j)) {
				max = rectSum(i, j);
				mY = i;
				mX = j;
			}
		}
	}

	cout << '(' << mY << ',' << mX << ')';

	return 0;
}

int rectSum(int y, int x) {
	int sum = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			sum += image[i + y][j + x];
	}

	return sum;
}