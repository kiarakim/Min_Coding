#include <iostream>
using namespace std;

// 동명이인 

char a[15], b[15];
int isSame(char a[15], char b[15]);

int main() {
	cin >> a >> b;
	int same = isSame(a, b);

	if (same == 1)
		cout << "동명";
	else
		cout << "남남";

	return 0;
}

int isSame(char a[15], char b[15]) {
	for (int i = 0; i < 15; i++) {
		if (a[i] != b[i]) {
			return 0;
			break;
		}
	}
	return 1;
}