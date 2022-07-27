#include<iostream>
using namespace std;

int map[4][5] = {
	3,5,4,2,5,
	3,3,3,2,1,
	3,2,6,7,8,
	9,1,1,3,2
};

int getSum(int y, int x) {
	int sum = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			sum += map[i + y][j + x];
		}
	}

	return sum;
}

int main() {

	int y, x;
	cin >> y >> x;

	int max = 0;
	int mY = 0;
	int mX = 0;
	for (int i = 0; i <= 4 - y;i++) {
		for (int j = 0; j <= 5 - x; j++) {
			if (max < getSum(i, j)) {
				max= getSum(i, j);
				mY = i;
				mX = j;
			}
		}
	}

	cout << '(' << mY << ',' << mX << ')';

	return 0;
}