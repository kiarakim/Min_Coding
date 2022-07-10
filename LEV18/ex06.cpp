#include <iostream>
#include<cstring>
using namespace std;

int main() {

	char str[10] = { "BTSKFCBBQ" };
	int len = strlen(str);

	int alpha[26] = { 0 };

	for (int i = 0; i < len; i++) {
		alpha[str[i] - 65]++;
	}

	for (int i = 0; i < 26; i++) {
		if (alpha[i])
			cout << (char)(i + 65) << " : " << alpha[i] << endl;
	}

	return 0;
}