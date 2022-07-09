#include <iostream>
using namespace std;

// 합격자 발표일 
int v[6] = { 3,7,4,1,2,6 };
int isExist(int num);

int main() {
	int univer[2][2];
	cin >> univer[0][0] >> univer[0][1] >> univer[1][0] >> univer[1][1];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int is = isExist(univer[i][j]);
			if (is == 1)
				cout << "OK" << " ";
			else
				cout << "NO" << " ";
		}
		cout << endl;
	}

	return 0;
}

int isExist(int num) {
	for (int i = 0; i < 6; i++) {
		if (v[i] == num) {
			return 1;
			break;
		}
	}
	return 0;
	
}