#include <iostream>
using namespace std;

// 비트배열 마스킹처리와 합 구하기
int main() {

	int a[3][3] = { 3,5,9,4,2,1,1,1,5 };
	int sum = 0;
	int b[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			cin >> b[i][j];
			if (b[i][j] == 1) {
				sum += a[i][j];
			}
		}
	}

	cout << sum;

	return 0;
}