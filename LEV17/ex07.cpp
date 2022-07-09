#include <iostream>
using namespace std;

int arr[9] = { 4,3,5,1,7,5,6,8,2 };
int getSum(int target);

int main() {
	int t;
	cin >> t;

	int sum = getSum(t);

	cout << sum;

	return 0;
}

int getSum(int target) {
	int sum = 0;
	
	for (int i = target; i < (target + 4); i++) {
		sum += arr[i];
	}

	return sum;
}