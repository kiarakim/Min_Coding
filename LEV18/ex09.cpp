#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char str[10] = "BBQBHSBTS";
	int dat[26] = { 0 };
	int len = strlen(str);

	for (int i = 0; i < len; i++) {
		dat[str[i] - 65]++;
	}

	int index = 0;

	for (int i = 0; i < 26; i++) {
		if (dat[i] > dat[index]) {
			index = i;
		}
	}
	cout << (char)(index + 65);

	return 0;
} 