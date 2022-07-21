#include <iostream>
#include<cstring>
using namespace std;

int a[4][5] = {
	1,1,1,1,1,
	2,2,2,2,2,
	1,0,1,0,1,
	0,1,0,1,0
};

int main() {
	int x = 1;
	int y = 1;

	int sum = 0;
	//sum += a[y - 1][x + 0]; //down
	//sum += a[y + 1][x + 0]; //up
	//sum += a[y + 0][x + 1]; //right
	//sum += a[y + 0][x - 1]; //left

	int direct[4][2] = {
		-1,0,
		1,0,
		0,1,
		0,-1
	};

	for (int t = 0; t < 4; t++) {
		// dy, dx´Â ÁÂÇ¥(t=0ÀÏ ¶© À§ ÁÂÇ¥, t=1ÀÏ ¶© ¾Æ·¡ ÁÂÇ¥..)
		int dy = y + direct[t][0];
		int dx = x + direct[t][1];

		if (dy >= 0 && dy < 4 && dx >= 0 && dx < 4) {
			sum += a[dy][dx];
		}

	}
	cout << sum;

	return 0;
}