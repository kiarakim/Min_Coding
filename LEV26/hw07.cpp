#include<iostream>
using namespace std;

int main() {

	int arr[7] = { 3,5,5,6,9,1,2 };

	int a, b;
	cin >> a >> b;

	for (int i = 0; i < 7; i++) {
		if (i == a) {
			for (int j = b; j >= a; j--) {
				cout << arr[j] << ' ';
			}
			i += b - a + 1;
		}
		cout << arr[i] << ' ';
	}

	return 0;
}