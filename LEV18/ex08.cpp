#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char arr[10];
	cin >> arr;

	char input[3];
	cin >> input[0] >> input[1] >> input[2];

	int dat[30] = { 0 };

	//1. dat 채우기 
	int len = strlen(arr);
	for (int i = 0; i < len; i++) {
		dat[arr[i] - 65] = 1;
	}

	//2. 하나씩 검사
	for (int i = 0; i < 3; i++) {
		char ch = input[i] - 65;
		if (dat[ch]) cout << "O";
		else cout << "X";
	}

	return 0;
}