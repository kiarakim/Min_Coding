#include<iostream>
#include<string>
using namespace std;

string str;
string add[4] = { ".com", ".co.kr",".org", ".net" };

int getHttpIdx(int &start, int end) {
	string temp = str.substr(start, end - start);
	
	if (temp.find("http", 0) != -1) { // ���� ã������
		int b = str.find("http", start);	// �񱳴� http�ڿ� �ִ� �� �������� �� ��
		if (str[b + 4] == 's') {	// �ڿ� s�� ������
			start = b + 8;
			return b;
		}
		else {
			start = b + 7;
			return b;
		}
	}
	return -1;
}

int checkStr(int start, int &end) {
	end = str.find('.', start); // ���� ã��
	int tempStart = start;
	if (getHttpIdx(tempStart, end) == -1) { // start�� end ���̿� http������
		if (str.substr(tempStart, end - tempStart).length() < 3) // ���ؼ� 3���� ������
			return 0; // ��
		return 1; // 3���� ������ ����
	}
	return 0; // ��. �� ���̿� http ����
}

int getAddIdx(int start) { // .com�ֳ�?
	string temp = str.substr(start, 6);
	for (int i = 0; i < 4; i++) {
		if (temp.find(add[i]) == 0)
			return 1; //�ִ�
	}
	return 0; //����
}
int main() {
	cin >> str;

	// �ҹ��ڷ� �ٲٱ�
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}

	int a = 0;
	int b = 0;
	int cnt = 0;

	while (1) {
		b = getHttpIdx(a, str.length()); // http ������ ã��
		if (b == -1) break; // �ּ� ��ã���� break

		if (checkStr(a, b) == 1) { // .ã�� ���� �ܾ� 3�� �̻��̸�
			if (getAddIdx(b) == 1) {// .com �ֳ�? ������
				cnt++;
				a = b;
			}
		}
		a++;
	}
	
	cout << cnt << "��";

	return 0;
}