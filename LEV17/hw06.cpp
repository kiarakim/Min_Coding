#include <iostream>
using namespace std;

// ��ģ mask �迭�� ��ǥ ���ϱ�

int main() {

	int a[4][4] = { 0,0,0,1,1,1,0,1,1,0,0,1,1,1,1,1 };
	int b[4][4] = { 1,1,1,1,1,0,1,1,1,0,0,0,1,0,0,0 };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (!a[i][j] && !b[i][j])
				cout << "(" << i << "," << j << ")" << endl;
		}
	}
	return 0;
}
