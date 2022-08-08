#include<iostream>
using namespace std;

int a, b;
int arr[3][2][3] = { 0 };

void change(int n, int ch) {
	for (int z = 0; z < 3; z++) {
		for (int y = 0; y < 2; y++) {
			for (int x = 0; x < 3; x++) {
				arr[z][n][x] = ch;
			}
		}
	}
}

int main() {

	cin >> a >> b;
	change(0, a);
	change(1, b);

	for (int z = 0; z < 3; z++) {
		for (int y = 0; y < 2; y++) {
			for (int x = 0; x < 3; x++) {
				cout << arr[z][y][x] << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}


	return 0;
}