#include<iostream>
#include<cstring>
using namespace std;

int main() {

	char code[5][10] = {
		"Jason",
		"Dr.Tom",
		"EXEXI",
		"GK12P",
		"POW"
	};

	char A[10];
	cin >> A;

	int flag = 0;

	for (int i = 0; i < 5; i++) {
		if (strcmp(A, code[i]) == 0) {
			flag = 1;
			break;
		}
		else
			flag = 0;
	}

	if (flag == 1) cout << "암호해제";
	else cout << "암호틀림";

	return 0;
}