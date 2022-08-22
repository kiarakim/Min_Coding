#include<iostream>
#include<string>
using namespace std;

int getCnt(string str) {
	int a = -1;
	int c = 0;
	while (1) {
		a = str.find("MCD", a + 1);
		if (a == -1) break;
		c++;
	}
	return c;
}

int main() {

	string input[5];
	for (int i = 0; i < 5; i++)
		cin >> input[i];

	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		cnt += getCnt(input[i]);
	}

	cout << cnt;

	return 0;
}