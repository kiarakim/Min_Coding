#include<iostream>
using namespace std;

char a[3][3][3];
char ch;

void change(int z) {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++)
			a[z][y][x] = ch + z;
	}
}

int main() {

	cin >> ch;

	for (int z = 0; z < 3; z++)
		change(z);

	for (int z = 0; z < 3; z++) {
		for (int y = 0; y < 3; y++) {
			for (int x = 0; x < 3; x++)
				cout << a[z][y][x];
			cout << '\n';
		}
		cout << '\n';
	}

	return 0;
}