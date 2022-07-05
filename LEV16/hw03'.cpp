#include <iostream>
using namespace std;

// 함수에 주소 넘기기 복습!

int a[2][3];
void getMax(int* maxX, int* maxY);
void getMin(int* minX, int* minY);

int main() {
	
	int maxX, maxY, minX, minY;
	// 배열 입력 초기화
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	}
	getMax(&maxX, &maxY);
	getMin(&minX, &minY);

	cout << "(" << maxX << "," << maxY << ")" << endl;
	cout << "(" << minX << "," << minY << ")" << endl;

	return 0;
}

void getMax(int* maxX, int* maxY) {
	int max = -99;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
				*maxX = i; *maxY = j;
			}
		}
	}
}

void getMin(int* minX, int* minY) {
	int min = 99;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (a[i][j] < min) {
				min = a[i][j];
				*minX = i; *minY = j;
			}
		}
	}
}