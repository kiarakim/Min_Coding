#include<iostream>
#include<string>
using namespace std;

int main() {

	string str = "1942|1995|87";
	str += '|';

	int a = 0;
	int b = 0;
	while (1) {
		b = str.find('|', a);
		if (b == -1) break;
		cout << str.substr(a, b - a) << "\n";
		a = b + 1;
	}

	return 0;
}