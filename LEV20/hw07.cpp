#include<iostream>
using namespace std;

int arr[8] = { 3,7,4,1,9,4,6,2 };

void abc(int n) {
	cout << arr[n] << ' ';
	if (n == 0)
		return;
	abc(n - 1);
	cout << arr[n] << ' ';
}

int main() {
	
	int n;
	cin >> n;

	abc(n);

	return 0;
}