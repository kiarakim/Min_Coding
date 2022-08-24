#include<iostream>
#include<string>
using namespace std;

string str;
string before[5] = {"KFC","MC","BICMAC", "SHACK","SONY"};
string after[5] = {"#BBQ#", "#BBQ#","#MACBOOK#", "#SHOCK#","#NONY#"};

void run(int idx) {
	int a = 0;
	int len = before[idx].length();

	while (1) {
		a = str.find(before[idx], a);
		if (a == -1) break;
		str.erase(a, len);
		str.insert(a, after[idx]);
		a++;
	}
}

int main() {

	cin >> str;

	for (int i = 0; i < 5; i++) {
		run(i);
	}

	cout << str;

	return 0;
}