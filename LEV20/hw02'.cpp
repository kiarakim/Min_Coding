#include<iostream>
using namespace std;

int main() {

	char a[11];
	cin >> a;
	int len = 0;
	for (int i = 0; i < 11; i++) {
		if (a[i] == NULL) {
			len = i;
			break;
		}
	}

	for (int i = 0; i < len; i++) {
		for (int j = len - 1 - i; j < len; j++)
			cout << a[j];
		cout << endl;
	}

	return 0;
}