#include<iostream>
using namespace std;

int castle[4][4] = {
	0,0,0,0,
	0,1,1,0,
	2,2,3,0,
	1,3,3,1
};

int isSafe() {
	for (int x = 0; x < 4; x++) {
		for (int y = 3; y > 0; y--) {
			if (castle[y][x] < castle[y - 1][x])
				return 1;
		}
	}
	return 0;
}

int main() {


	if (isSafe() == 1) cout << "안전하지않은성";
	else cout << "안전한성";

	return 0;
}