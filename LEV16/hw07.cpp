#include <iostream>
using namespace std;

// M�� �����մϱ�?
int main() {
	int flag = 0;
	char v[3][11];
	cin >> v[0] >> v[1] >> v[2];
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			if (v[i][j] == '\0') break;
			if (v[i][j] == 'M') {
				flag = 1;
				break;
			}
		}
		if (flag == 1) break;
	}

	if (flag == 0)
		cout << "M�� �������� �ʽ��ϴ�";
	else
		cout << "M�� �����մϴ�";
	return 0;
}