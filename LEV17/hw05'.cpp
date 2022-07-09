#include <iostream>
using namespace std;

// 입력받은 비트배열로 마스킹하기
int main() {
	int vect[7] = { 3,5,4,2,6,6,5 };
	int bit[7];
	
	// 배열에 입력 
	for (int i = 0; i < 7; i++)
		cin >> bit[i];

	// 마스킹
	for (int i = 0; i < 7; i++) {
		if (bit[i]) {
			bit[i] = vect[i];
		}
	}

	// 값 변환 및 출력
	for (int i = 0; i < 7; i++) {
		if (bit[i]) {
			bit[i] = 7;
		}
		cout << bit[i];
	}


	return 0;
}