#include<iostream>
using namespace std;

int A[] = { 4,2,5,3,7,6 };
int B[] = { 5,3,7 };

int isSame(int n);

int main() {
	int n;
	cin >> n;

	if (isSame(n) == 1)cout << "O";
	else cout << "X";

	return 0;
}

int isSame(int n) {
	for (int i = 0; i < 3; i++) {
		if (A[i + n] != B[i])
			return 0;
	}
	return 1;
}