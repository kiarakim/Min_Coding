#include<iostream>
#include<string>
using namespace std;

string str;

void sum(int &res, int start, int end) {
	res += stoi(str.substr(start + 1, end - start - 1));
}

void mul(int &res, int start, int end) {
	res *= stoi(str.substr(start + 1, end - start - 1));
}

int main() {

	cin >> str;

	int a = 0;
	int b = 0;
	int res = 0;

	while (1) {
		if (str.find('[', a) < str.find('{', a)) {
			b = str.find('[', a);
			a = str.find(']', b);
			sum(res, b, a);
		}
		else {
			b = str.find('{', a);
			a = str.find('}', b);
			if (b == -1) break;
			mul(res, b, a);
		}
		a++;
	}
	cout << res;

	return 0;
}