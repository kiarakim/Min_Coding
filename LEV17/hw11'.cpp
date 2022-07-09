#include <iostream>
using namespace std;

// 비트배열로 마스킹처리하기 
int main() {
	int arr[4] = { 3,5,4,2 };
	int bit[4];
	for (int i = 0; i < 4; i++)
		cin >> bit[i];
	int sum = 0;

	for (int i = 0; i < 4; i++) {
		if (bit[i])
			sum += arr[i];
	}
	cout << sum;

	return 0;
}