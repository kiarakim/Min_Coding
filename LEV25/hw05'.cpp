#include<iostream>
#include<string>
using namespace std;

int main() {

	string str;
	cin >> str;
	string name[10];
	string num[10];

	int a = 0;
	int idx = 0;
	int len = str.length();

	for (int i = 0; i < len; i++) {
		if (str[i] < '0' || str[i] > '9') { // ������ ��
			if (str[i + 1] >= '0' && str[i + 1] <= '9') { // ���ڸ�
				name[idx] = str.substr(a, i + 1 - a);
				a = i + 1;
			}
		}

		if (str[i] >= '0' && str[i] <= '9') { // ������ ��
			if (str[i + 1] == NULL) {	// �����ٸ�
				num[idx++] = str.substr(a);
				break;
			}
			if (str[i + 1] < '0' || str[i + 1] > '9') {	// ���ڶ��
				num[idx++] = str.substr(a, i + 1 - a);
				a = i + 1;
			}
		}
	}

	for (int i = 0; i < idx; i++) {
		cout << name[i] << '#' << 17 + stoi(num[i]) << "\n";
	}

	return 0;
}