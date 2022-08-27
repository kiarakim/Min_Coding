#include<iostream>
#include<string>
using namespace std;

int calculate(string sent) {
	int num = 0;

	num = stoi(sent.substr(1));
	if (sent[0] == '+')
		return num;
	else
		return -num;
}

int calc(string str) {
	int sum = 0;
	int a = 0;
	int b = 0;

	while (1) {
		if (str.find('+', a + 1) < str.find('-', a + 1))
			b = str.find('+', a + 1);
		else
			b = str.find('-', a + 1);
		if (b == -1) break;

		string temp = str.substr(a, b - a);
		sum += calculate(temp);

		a = b;
	}

	return sum;
}

int main() {

	string str;
	cin >> str;

	str += '+';
	if (str[0] != '-')
		str.insert(0, "+");

	cout << calc(str);

	return 0;
}