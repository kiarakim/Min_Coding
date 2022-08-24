#include<iostream>
#include<string>
using namespace std;

int main() {
	
	string str = "ID:48,BTS:56,HHTT:99";
	str += ',';

	int a = 0;
	int b = 0;
	int sum = 0;

	while (1) {
		a = str.find(':', b + 1);
		if (a == -1) break;
		b = str.find(',', a + 1);
		sum += stoi(str.substr(a + 1, b - a - 1));
	}
	cout << sum;
	return 0;
}