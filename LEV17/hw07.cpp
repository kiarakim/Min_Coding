#include <iostream>
using namespace std;

// ����ŷ ó������ �Է°� ���� ����
int main() {
	int a[2][5] = { 0,0,1,0,0,0,0,1,1,1 };
	int b[2][5] = { 3,5,4,1,1,3,5,2,5,6 };
	bool t = false;
	int n;
	cin >> n;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[i][j] && b[i][j] == n) {
				t = true;
			}
		}
	}

	if (t)
		cout << n << " ����";
	else
		cout << n << " ����";
	return 0;
}
