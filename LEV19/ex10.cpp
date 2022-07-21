#include <iostream>
using namespace std;

struct Node
{
	int a, b;
};

Node arr[3][4] = {
	{{1,2},{5,3},{1,4},{1,5}},
	{{1,1},{1,1},{1,1},{1,2}},
	{{1,4},{1,5},{2,2},{3,3}}
};

int directY[4] = { -1,1,0,0 };
int directX[4] = { 0,0,-1,1 };

int getDirect(int dy, int dx);
int main() {

	int y = 1;
	int x = 1;

	int res = getDirect(y, x);
	cout << res;

	return 0;
}

int getDirect(int y, int x) {
	int sum = 0;
	int gop = 1;

	for (int t = 0; t < 4; t++) {
		int dy = y + directY[t];
		int dx = x + directX[t];

		if (dy < 0 || dx < 0 || dy >= 3 || dx >= 4)continue;
		sum += arr[dy][dx].a;
		gop *= arr[dy][dx].b;
	}

	return sum + gop;
}