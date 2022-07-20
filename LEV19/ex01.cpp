#include<iostream>
#include<cstring>
using namespace std;

int isSame(int n);
char da[15] = "ABFRCBTRV";
char db[4] = "BTR";

int main() {
	int len = strlen(da);

	int flag = 0;
	for (int i = 0; i < len - 2; i++) {
		if (isSame(i) == 1) {
			flag = 1;
			break;
		}
	}
	if (flag == 1)cout << "O";
	else cout << "X";


	return 0;
}
int isSame(int n) {
	for (int i = 0; i < 3; i++) {
		if (db[i] != da[i + n])
			return 0;
	}
	return 1;
}