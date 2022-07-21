#include <iostream>
using namespace std;
int a[4][5] = {
	1,1,1,1,1,
	2,2,2,2,2,
	1,0,1,0,1,
	0,1,0,1,0
};

int main() {
	int y = 1;
	int x = 1;
	int max = 0;;

	int directY[4] = { 0,0,1,1 };
	int directX[4] = { -1,1,0,1 };

	for (int i = 0; i < 4; i++) {
		int dy = y + directY[i];
		int dx = x + directX[i];

		if (dy < 0 || dx < 0 || dy >= 4 || dx >= 5)continue;
		if (a[dy][dx] > max) {
			max = a[dy][dx];
		}
	}
	cout << max;
	return 0;
}