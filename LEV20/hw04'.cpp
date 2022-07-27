#include<iostream>
using namespace std;

int main() {

	int a1[4][4];
	int a2[4][4];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			cin >> a1[i][j];
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			cin >> a2[i][j];
	}

	int isSame = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (a1[i][j] && a2[i][j]) {
				isSame = 1;
				break;
			}
		}
	}

	if (isSame == 1) cout << "걸리다";
	else cout << "걸리지않는다"; 

	return 0;


}