#include<iostream>
#include<vector>
#include<string>
using namespace std;

int dat[26] = { 0 };

int main() {

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		dat[str[i] - 'A'] = 1;
	}

	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (dat[i]) cnt++;
	}

	cout << cnt << "Á¾·ù";

	return 0;
}