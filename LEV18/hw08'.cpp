#include <iostream>
#include<cstring>
using namespace std;

// 다른 문장 입력하기
int main() {

	char arr[3][15];
	for (int i = 0; i < 3; i++)
		cin >> arr[i];
	int dat[26] = { 0 };

	for (int i = 0; i < 3; i++) {
		int len = strlen(arr[i]);
		for (int j = 0; j < len; j++)
			dat[arr[i][j] - 65]++;
	}

	int flag = 1;
	for (int i = 0; i < 26; i++) {
		if (dat[i] > 1) {
			flag = 0;
			break;
		}
	}
	if (flag == 1)cout << "Perfect";
	else cout << "No";

	return 0;
}