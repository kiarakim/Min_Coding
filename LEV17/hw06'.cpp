#include <iostream>
using namespace std;

// 금고털이 

int password[4] = { 3,7,4,9 };
int isSame(int a[4]);

int main() {

	int input[4];
	for (int i = 0; i < 4; i++)
		cin >> input[i];

	int s = isSame(input);
	if (s)
		cout << "pass";
	else
		cout << "fail";

	return 0;
}

int isSame(int a[4]) {
	for (int i = 0; i < 4; i++) {
		if (password[i] != a[i]) {
			return 0;
			break;
		}
	}
	return 1;
}