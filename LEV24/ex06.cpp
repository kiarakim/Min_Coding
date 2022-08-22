#include<iostream>
#include<string>
using namespace std;

string isN(string arr) {
	if (arr.find('[') == -1) return "";
	int a = arr.find('[') + 1;
	int b = arr.find(']', a);
	string ret = arr.substr(a, b - a) + ' ';

	return ret;
}

int main() {

	string str[4] = { "ABCQ","B[4]R", "CCDA", "BT[15]" };

	int a, b;

	for (int i = 0; i < 4; i++) {
		cout << isN(str[i]);
	}

	return 0;
}