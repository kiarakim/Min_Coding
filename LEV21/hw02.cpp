#include<iostream>
#include<cstring>
using namespace std;

char idL[10] = "qlqlaqkq";
char pwL[15] = "tkaruqtkf";

int isCorrect(char id[], char pw[]) {
	if (strcmp(idL, id) == 0 && strcmp(pwL, pw) == 0)
		return 1;
	return 0;
}

int main() {

	char id[10];
	char pw[15];
	cin >> id >> pw;

	int flag = isCorrect(id, pw);


	if (flag == 1) cout << "LOGIN";
	else cout << "INVALID";

	return 0;
}