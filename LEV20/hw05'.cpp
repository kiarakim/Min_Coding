#include<iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	for (int i = -3; i <= 3; i++) {
		if (ch + i < 'A') cout << (char)(91 - ('A' - ch - i));
		else if (ch + i > 'Z')cout << (char)(64 + (ch + i - 'Z'));
		else cout << (char)(ch + i);
	}

	return 0;


}