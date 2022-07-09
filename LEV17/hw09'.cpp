#include <iostream>
using namespace std;

// 비트 배열에서 min값의 인덱스와 값 구하기 
int main() {
	int arr[6];
	for (int i = 0; i < 6; i++) 
		cin >> arr[i];
	
	int bit[6] = { 1,0,1,0,1,0 };
	int min = arr[0];
	int mIdx = 0;

	for (int i = 0; i < 6; i++) {
		if (bit[i] && arr[i] < min) {
			min = arr[i];
			mIdx = i;
		}
	}

	cout << "arr[" << mIdx << "]=" << min;

	return 0;
}