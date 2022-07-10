#include<iostream>
#include<cstring>
using namespace std;
//보스문제2
int main() {

	int black[2][4] = {
		5,7,8,55,
		10,10,6,8
	};

	int town[2][4] = {
		1,2,3,4,
		5,7,10,15
	};

	int dat[31] = { 0 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			dat[black[i][j]]++;
		}
	}

	int per = 0;
	int crim = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			if (dat[town[i][j]])
				crim++;
			else
				per++;
		}
	}
	cout << "per  : " << per << endl;
	cout << "crim : " << crim;
} 