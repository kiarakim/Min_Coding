#include <iostream>
using namespace std;

void bts(int i) {
	// abc�ȿ� �ִ� ���� n�� 3�̰�, abc �ȿ� �ִ� ���� i�� 1�� �� ������ �����?
	cout << i;
}

void abc(int n) {
	for (int i = 0; i < 4; i++) {
		if (n == 3 && i == 1) {
			int d = 1;
		}
		bts(i);
	}
}

int main() {
	
	for (int i = 0; i < 5; i++) {
		abc(i);
	}

	return 0;
}