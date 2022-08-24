#include<iostream>
#include<string>
using namespace std;
// ��ȿ�� �˻� : valid check
// ��ȿ�� �˻�� ���� �Լ��� ����.
// ex) �־��� ���� �ּ� ��, �԰ݿ� �´� �ּҴ� �� ������ ���Ϸ� �մϴ�. -> ��ȿ�� �˻� ����

int isValid(string str) {

	int len = str.length();
	
	// 2~5
	if (!(len >= 2 && len <= 5)) return 0;

	//Ư�� 1��
	int cnt = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') continue;
		if (str[i] >= 'a' && str[i] <= 'z') continue;
		if (str[i] >= '0' && str[i] <= '9') continue;
		return 0;
	}

	// �빮�� ����
	for (int i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') return 0;
	}

	//����
	return 1;
}

int main() {

	string str;
	cin >> str;

	if (isValid(str) == 1) cout << "VALID";
	else cout << "INVALID";

	return 0;
}