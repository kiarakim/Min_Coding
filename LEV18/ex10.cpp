#include<iostream>
#include<cstring>
using namespace std;
//보스문제1
int main() {

	int land[3][4] = { 
		4,5,7,6,
		1,5,5,4,
		1,1,1,1
	};

	int res[2][3] = {
		5,6,4,
		1,5,3
	};

	int dat[30] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			dat[land[i][j]]++;
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << dat[res[i][j]] << " ";
		}
		cout << endl;
	}
	return 0;
}