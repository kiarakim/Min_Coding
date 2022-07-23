#include<iostream>
using namespace std;

int sum(int y, int x);

int MAP[5][5] = {
	{3, 3, 5, 3, 1},
	{2, 2, 4, 2, 6},
	{4, 9, 2, 3, 4},
	{1, 1, 1, 1, 1},
	{3, 3, 5, 9, 2}
};

int directY[4] = { -1,-1,1,1 };
int directX[4] = { -1,1,-1,1 };

int main() {

	int max = 0;
	int mY = 0;
	int mX = 0;
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			if (sum(y, x) > max) {
				max = sum(y, x);
				mY = y;
				mX = x;
			}
		}
	}
	cout << mY << ' ' << mX;

	return 0;
}

int sum(int y, int x) {
	int sum = 0;

	for (int i = 0; i < 4; i++) {
		int dy = y + directY[i];
		int dx = x + directX[i];

		if (dy < 0 || dx < 0 || dy >=  5|| dx >= 5) continue;
		sum += MAP[dy][dx];
	}

	return sum;
}
