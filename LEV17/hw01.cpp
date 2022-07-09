#include<iostream>
using namespace std;

// 좋아하는 메뉴 찾기
char arr[5] = { "MTKC" };
int isExist(char c);

int main() {
	char c;
	cin >> c;
	if (isExist(c))
		cout << "발견";
	else
		cout << "미발견";

	return 0;
}

int isExist(char c) {
	for (int i = 0; i < 4; i++) {
		if (arr[i] == c)
			return 1;
	}
	return 0;
}