#include <iostream>
#include <cstring>
using namespace std;

int main() {

	//char buf[] = "ABC";

	//cout << strcmp(buf, "ABC"); // 똑같으면 0리턴. 사전 순으로 비교함. 앞에있는 문자가 사전 순으로 더 크면 1, 작으면 -1

	//C언어에서 입력, 출력
	//strcpy, str...Lib

	//ID : BBQ
	//PW : 1234

	//LOGIN PASS
	//
	//LOGIN FAIL

	char id[10];
	char pw[10];

	cout << "ID : ";
	cin >> id;

	cout << "PW : ";
	cin >> pw;

	if (!strcmp(id, "BBQ") && !strcmp(pw, "1234"))
		cout << "LOGIN PASS";
	else
		cout << "LOGIN FAIL"; 

	return 0;
}