#include<iostream>
using namespace std;

// 중복 제거하기
int main() {

	char arr[11];
	cin >> arr;

	int dat[7] = { 0 };
	
	int len;
	for (int i = 0; i < 11; i++) {
		if (arr[i] == NULL) {
			len = i;
			break;
		}
	}

	for (int i = 0; i < len; i++)
		dat[arr[i] - 65] = 1;
	
	for (int i = 0; i < 7; i++) {
		if (dat[i])
			cout << (char)(i + 65);
	}

	return 0;
}