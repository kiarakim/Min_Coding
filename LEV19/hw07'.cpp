#include<iostream>
using namespace std;

int map[3][3] = {
	3,5,1,
	3,8,1,
	1,1,5
};

int bitarray[2][2];
int getSum(int y, int x);

int main() {

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			cin >> bitarray[i][j];
	}
	int max = 0;
	int mY, mX;
	for (int y = 0; y <= 3 - 2; y++) {
		for (int x = 0; x <= 3 - 2; x++) {
			if (max < getSum(y, x)) {
				max = getSum(y, x);
				mY = y;
				mX = x;
			}
		}
	}

	cout << '(' << mY << ',' << mX << ')';

	return 0;

}

int getSum(int y, int x) {
	int sum = 0;

	for (int i = 0; i < 2; i++)	{
		for (int j = 0; j < 2; j++) {
			if (bitarray[i][j] && map[i + y][j + x])
				sum += map[i + y][j + x];
		}
	}
	return sum;
}