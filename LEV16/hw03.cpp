#include <iostream>
using namespace std;

//���� A �߰��ϱ�
int main() {
	char v[6] = {0};
	int index, len;

	cin >> v;
	cin >> index;

	//���ڿ� ����
	for (int i = 0; i < 6; i++) {
		if (v[i] == '\0') {
			len = i;
			break;
		}
	}

	//��ĭ �̷��
	/*for (int i = len; i >= index; i--) {
		v[i + 1] = v[i];
	}*/

	for (int i = len; i > index; i--) {
		v[i] = v[i - 1];
	}

	//"A" �ֱ�
	v[index] = 'A';

	cout << v;
	return 0;
}