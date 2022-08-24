#include<iostream>
#include<string>
using namespace std;

string par[10];

int split(string src) {
	int idx = 0;
	int a = 0;
	int b = 0;

	while (1) {
		b = src.find('_', a);
		if (b == -1) break;
		if (a == b) {
			a++;
			continue;
		}
		string temp = src.substr(a, b - a);
		par[idx++] = temp;
		a = b + 1;
	}
	return idx;
}

int main() {

	string str;
	cin >> str;
	str += '_';

	int idx = split(str);

	for (int i = 0; i < idx; i++) {
		cout << i + 1 << "#" << par[i] << "\n";
	}

	return 0;
}