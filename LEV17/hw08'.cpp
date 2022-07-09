#include<iostream>
using namespace std;

// 컬러찾기 

int map[2][3] = { 3,55,42,-5,-9,-10 };
int isExist(int n);

int main() {
	int pix[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			cin >> pix[i][j];
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (isExist(pix[i][j]))
				cout << "Y ";
			else
				cout << "N ";
		}
		cout << endl;
	}

	return 0;
}

int isExist(int n) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (map[i][j] == n)
				return 1;
		}
	}
	return 0;
}