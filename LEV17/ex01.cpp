#include <iostream>
using namespace std;

int a[50] = { 5 };

void abc() {

	for (int i = 1; i < 50; i++) {

		// ���� 42�� ° index���� ���� ���� �̻��ϴ�?

		// -> ����� �ڵ带 �����Ѵ�.
		if (i == 42) {
			int d = 1;
		}
		a[i] = (a[i - 1] * 7 + 41) % 11;
	}
}

// '#'���
int main() { 
	abc();

	return 0;
}