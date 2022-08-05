#include<iostream>
#include<cstring>
using namespace std;

int isSame(char a[], char b[]) {
	if (strcmp(a, b) == 0)
		return 1;
	return 0;
}
int main() {

	char A[3][11];
	for (int i = 0; i < 3; i++)
		cin >> A[i];

	if (isSame(A[0],A[1])) {
		if (isSame(A[1], A[2])) cout << "WOW";
		else cout << "GOOD";
	}
	else {
		if (isSame(A[1], A[2])) cout << "GOOD";
		else if (isSame(A[0], A[2])) cout << "GOOD";
		else cout << "BAD";
	}

	return 0;
}