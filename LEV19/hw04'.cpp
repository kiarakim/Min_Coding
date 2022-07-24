#include<iostream>
using namespace std;

int arr[4][4] = { 0 };
void color(char A, int a);

int main() {

	char A;
	int a;

	for (int i = 0; i < 3; i++) {
		cin >> A >> a;
		color(A, a);
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			cout << arr[i][j] << ' ';
		cout << endl;
	}

	return 0;
}

void color(char A, int a) {
	for (int i = 0; i < 4; i++) {
		if (A == 'G') arr[a][i] = 1;
		if (A == 'S') arr[i][a] = 1;
	}
}