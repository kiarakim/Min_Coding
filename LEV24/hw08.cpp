#include<iostream>
#include<string>
using namespace std;

int main() {

	string str;
	cin >> str;

	int a, b, c;
	cin >> a >> b >> c;

	for (int i = 0; i < c; i++) {
		cout << str.substr(a, b - a + 1);
	}

	return 0;
}