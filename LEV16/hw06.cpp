#include <iostream>
using namespace std;

// �迭�� ������ ���ϱ�
int main() {
	int v[6];
	int res[6] = { 0 };

	for (int i = 0; i < 6; i++) {
		cin >> v[i];
	}

	res[0] = v[0];

	for (int i = 1; i < 6; i++) {
		res[i] = v[i] + res[i - 1];
	}
	for (int i = 0; i < 6; i++) {
		cout << res[i] << " ";
	}
	return 0;
}