#include <iostream>
using namespace std;

// 두 글자의 존재 여부

void isExist(char a[2][7], char ch);

int main() {

	char a[2][7] = {
	"A79TKQ",
	"MINCOD"
	};

	char ch1, ch2;
	cin >> ch1 >> ch2;

	isExist(a, ch1);
	isExist(a, ch2);

	return 0;
}

void isExist(char a[2][7], char ch) {
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			if (a[i][j] == ch) {
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0)
		cout << ch << " : 없음" << endl;
	else
		cout << ch << " : 존재" << endl;
}