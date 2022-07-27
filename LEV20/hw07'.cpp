#include<iostream>
using namespace std;

int main() {

	char v[10];
	int len = 0;
	cin >> v;

	for (int i = 0; i < 10; i++) {
		if (v[i] == '\0') {
			len = i;
			break;
		}
	}
	

	for (int i = 0; i < len; i++) {
		for (int j = 0; j <= i; j++)
			cout << v[j];
		cout << endl;
	}

	return 0;
}