#include<iostream>
#include<string>
using namespace std;

int main() {

	// �Ľ��� ���� �غ� 1 : find
	// �Ľ��� ���� �غ� 2 : substr

	//string str = "ABCWERW";
	//string ret = str.substr(2, 4); // 2�� 'index'���� 4'����'�� �̾Ƴ�

	// -------------------------------------------------------------

	// A~Z���� ���ڿ� �ϳ� �����.
	string str;
	for (char i = 'A'; i <= 'Z'; i++) {
		str += i;
	}
	// �� 2�� �Է�. a,b
	// a index~ b index���� ���(substr ���)
	int a, b;
	cin >> a >> b;

	cout << str.substr(a, b - a + 1);
		
	return 0;
}