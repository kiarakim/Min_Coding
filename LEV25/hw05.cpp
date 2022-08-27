#include<iostream>
#include<string>
using namespace std;

string name[10];
string domain[10];

int mail(string str) {
	int idx = 0;
	int a = 0;
	int b = 0;

	while (1) {
		b = str.find('@', a);
		if (b == -1) break;
		name[idx] = str.substr(a, b - a);

		a = str.find('.', b + 1);
		domain[idx++] = str.substr(b + 1, a - b - 1);
		
		a = str.find('|', a) + 1;
	}

	return idx;
}

int main() {

	string str;
	cin >> str;
	str += '|';

	int idx = mail(str);

	for (int i = 0; i < idx; i++) {
		cout << "[#" << name[i] << "] " << domain[i] << "\n";
	}

	return 0;
}