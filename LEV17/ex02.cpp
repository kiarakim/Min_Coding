#include <iostream>
using namespace std;

int a[100000] = { 5 };

int main() {
	for (int i = 0; i < 100000; i++) {
		a[i + 1] = a[i] * 2;
		// �� �� index���� 21���� �Ѿ ������ �Ǵ°�? -> return 0�� Ŀ�� �ΰ� Ctrl+F10. ����� Ȯ��
		
		// index 28���� õõ�� ����ʹ�? �Ʒ� ����
		if (i == 27) {
			int d = 1;
		}
	}

	return 0;
}