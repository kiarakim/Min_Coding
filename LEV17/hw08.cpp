#include <iostream>
using namespace std;

// ���� ����� ã��
int main() {
	char vect[7] = { "BTKIGZ" };
	char target[4];
	cin >> target[0] >> target[1] >> target[2] >> target[3];
	int cnt = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			if (target[i] == vect[j])
				cnt++;
		}
	}

	cout << cnt;

	return 0;
}
