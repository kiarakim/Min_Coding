#include<iostream>
#include<cstring>
using namespace std;

int main() {

	char sent[15];
	char a, b;
	cin >> sent >> a >> b;

	int len = strlen(sent);
	int dat[15] = { 0 };

	for (int i = 0; i < len; i++) {
		if (sent[i] == a || sent[i] == b) {
			if (i == 0)
				dat[i + 1] = 1;
			else if (i == len - 1)
				dat[i - 1] = 1;
			else {
				dat[i - 1] = 1;
				dat[i + 1] = 1;
			}
		}
	}

	for (int i = 0; i < len; i++) {
		if (dat[i])
			sent[i] = '#';
	}

	cout << sent;

	return 0;
}