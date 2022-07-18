#include<iostream>
#include<cstring>
using namespace std;

// 각 글자수 세기
int main() {

	char arr[11];
	cin >> arr;

	int len = strlen(arr);
	int dat[26] = { 0 };

	for (int i = 0; i < len; i++)
		dat[arr[i] - 65]++;

	for (int i = 0; i < 26; i++) {
		if (dat[i])
			cout << (char)(i + 65) << ':' << dat[i] << endl;
	}

	return 0;
}