#include<iostream>
#include<string>
using namespace std;

int main() {

	string str = "123-324-43543-12";
	str += '-';

	int sum = 0;
	int a = 0;
	int b = 0;

	while (1) {
		b = str.find('-', a);
		if (b == -1) break;
		sum += stoi(str.substr(a, b - a));
		a = b + 1;
	}

	cout << sum;

	return 0;
}