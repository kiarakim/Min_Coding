#include <iostream>
#include <cstring>
using namespace std;

int main() {

	//char buf[] = "ABC";

	//cout << strcmp(buf, "ABC"); // �Ȱ����� 0����. ���� ������ ����. �տ��ִ� ���ڰ� ���� ������ �� ũ�� 1, ������ -1

	//C���� �Է�, ���
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