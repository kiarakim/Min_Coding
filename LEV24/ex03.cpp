#include<iostream>
#include<string>
using namespace std;

int main() {

	/*string a = "ABC";
	string b = "WERT";
	string c;*/

	//c = "ABC" + "DEF" + "GHI"; // �̰� �ȵ�. �����ε� ��¼�� ������. �� �Ϸ��� ���ε��� �ؾ���.

	// string Ŭ���� + ���ڿ� (O)
	// ���ڿ� + ���ڿ� (X)

	//c = b + "ABC"; //�̰� ����

	string str[4] = { "ABBT","BTBT&","BBBT","KFC" };

	for (int i = 0; i < 4; i++) {
		for (int j = str[i].length()-1; j >= 0; j--) {
			cout << str[i][j];
		}
		cout << "\n";
	}


	return 0;
}