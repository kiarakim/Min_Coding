#include <iostream>
using namespace std;

// 저격 SUM 
int arr[11] = { 3,4,1,1,2,6,8,7,8,9,10 };
int getSum(int index);

int main() {
	int startIndex;
	cin >> startIndex;

	int sum = getSum(startIndex);

	cout << sum;

	return 0;
}

int getSum(int index) {
	int sum = 0;

	for (int i = index; i < (index + 5); i++) {
		sum += arr[i];
	}

	return sum;
}