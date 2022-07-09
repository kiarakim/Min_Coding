#include<iostream>
using namespace std;

// 보물찾기 
char arr[2][4] = { "GKT", "PAC" };
int isExist(char ch);

int main() {
	char ch1, ch2;
	cin >> ch1 >> ch2;

	int a = isExist(ch1);
	int b = isExist(ch2);

	if (a && b)
		cout << "대발견";
	else if(!a &&!b)
		cout << "미발견";
	else
		cout << "중발견";

	return 0;
}

int isExist(char ch) {
	int cnt = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == ch) {
				return 1;
				break;
			}
		}
	}
	return 0;

	return cnt;
}