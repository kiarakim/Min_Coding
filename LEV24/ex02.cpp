#include<iostream>
#include<string>
using namespace std;
// ���� ���

// c++ struct���ʹ� �Լ� ���� �� ����.
int main() {

	string str = "BTSKFCKDIVRWKFCWSKDFA";

	//int ret = str.find("KFC"); // KFC�� ��� �ε������� �ִ���.
	int ret = str.find("KFC", 5); // 5�� �ε������� ã�ƶ�

	cout << ret;

	return 0;
}