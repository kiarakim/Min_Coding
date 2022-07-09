#include <iostream>
using namespace std;

// 합친 mask배열의 좌표 구하기

int main() {

	int a[4][4] = { 0,0,0,1,1,1,0,1,1,0,0,1,1,1,1,1 };
	int b[4][4] = { 1,1,1,1,1,0,1,1,1,0,0,0,1,0,0,0 };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (!a[i][j] && !b[i][j])
				cout << "(" << i << "," << j << ")" << endl;
		}
	}
	return 0;
}
