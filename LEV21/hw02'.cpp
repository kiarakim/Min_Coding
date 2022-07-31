#include<iostream>
using namespace std;

int map[3][4] = {
	3,4,1,5,
	3,4,1,3,
	5,2,3,6
};

int getSum(int n) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += map[i][n];
	}
	return sum;
}

int main() {

	int index;
	cin >> index;
	int sum[4];

	for (int i = 0; i < 4; i++) {
		sum[i] = getSum(i);
	}

	cout << sum[index];

	return 0;
}