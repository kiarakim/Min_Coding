#include <iostream>
using namespace std;
// direct 를 써서 위,아래,양옆의 합을 구하는 프로그램
int a[4][5] = {
	1,1,1,1,1,
	2,2,2,2,2,
	1,0,1,0,1,
	0,1,0,1,0
};

int main() {
	int y = 1;
	int x = 1;
	int mul = 1;

	int direct[5][2] = {
		0,0,
		-1,-1,
		-1,1,
		1,-1,
		1,1
	};

	/*int directY[5] = { 0,-1,-1,1,1 };
	int directX[5] = { 0,-1,1,-1,1 };*/

	for (int i = 0; i < 5; i++) {
		int dy = y + direct[i][0];
		int dx = x + direct[i][1];
		/*int dy = y + directY[i];
		int dx = x + directX[i];*/

		/*if (dy >= 0 && dx >= 0 && dy < 4 && dx < 5)
			mul *= a[dy][dx];*/
		if (dy < 0 || dx < 0 || dy >= 4 || dx >= 5)continue;
		mul*= a[dy][dx];
	}

	cout << mul;
	return 0;
}