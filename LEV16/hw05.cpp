#include <iostream>
using namespace std;

//���ʹ��� �����ϱ�
int main() {
	char v[8];
	int index, len = 0;

	cin >> v;
	cin >> index;

	//���ڿ� ���� ���ϱ�
	for (int i = 0; i < 8; i++) {
		if (v[i] == NULL) {
			len = i;
			break;
		}
	}

	//����
	for (int i = index; i < len; i++) {
		v[i] = v[i + 1];
	}

	//���
	cout << v;

	return 0;
}