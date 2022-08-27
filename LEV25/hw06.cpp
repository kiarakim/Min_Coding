#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

string xo[6];

int dup(string arr) {
	int dat[26] = { 0 };
	int datN[10] = { 0 };
	for (int i = 0; i < arr.length(); i++) {
		if (arr[i] >= '0' && arr[i] <= '9') {
			datN[arr[i] - 48]++;
		}
		else dat[arr[i] - 'A']++;
	}
	
	for (int i = 0; i < 26; i++) {
		if (dat[i] > 1)
			return 0;
	}
	for (int i = 0; i < 10; i++) {
		if (datN[i] > 1)
			return 0;
	}
	return 1;
}

void isNoble(string str, int idx) {
	int a = 0;
	int b = 0;

	while (1) {
		a = str.find('<', b);
		if (a == -1) break;
		b = str.find('>', a);
		string temp = str.substr(a + 1, b - a - 1);
		if (dup(temp) == 0) {
			xo[idx] = 'X';
			break;
		}
		else xo[idx] = 'O';
	}
}

int main() {

	int n;
	cin >> n;

	string str[100];
	for (int i = 0; i < n; i++)
		cin >> str[i];

	for (int i = 0; i < n; i++) 
		isNoble(str[i], i);
	
	for (int i = 0; i < n; i++)
		cout << xo[i];
	
	return 0;
}