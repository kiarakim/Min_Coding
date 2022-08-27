#include<iostream>
#include<string>
using namespace std;

int year(string str) {
	int y = 1;
	if (str.find("XXXX") != -1) return y;
	for (int i = 0; i < 4; i++) {
		if (str[i] == 'X')
			y *= 10;
	}
	return y;
}

int month(string str) {
	int m = 1;
	if (str.length() == 1 && str == "X") m = 9;
	else if (str[1] == 'X') m = 3;
	return m;
}

int day(string str) {
	int d = 1;
	if (str.length() == 1 && str == "X") d = 9;
	else {
		if (str[0] == 'X') {
			if (str[1] == 'X') d = 22;
			else if (str[1] <= '1') d = 3;
			else d = 2;
		}
		else if (str[0] <= '1') d = 10;
		else d = 2;
	}
	return d;
}

int main() {

	string str;
	cin >> str;

	str += '.';
	int a = 0;
	int b = 0;
	string temp;

	b = str.find('.', a + 1);
	temp = str.substr(a, b - a);
	int y = year(temp);
	a = b;

	b = str.find('.', a + 1);
	temp = str.substr(a + 1, b - a - 1);
	int m = month(temp);
	a = b;

	b = str.find('.', a + 1);
	temp = str.substr(a + 1, b - a - 1);
	int d = day(temp);

	cout << y * m * d;


	return 0;
}