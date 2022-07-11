#include<iostream>
#include<cstring>
using namespace std;

// 성실한 직원 찾기

int rec[3][4] = {
	65000,35,42,70,
	70,35,65000,1300,
	65000,30000,38,42
};

int dat[65536] = { 0 };

int main() {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			dat[rec[i][j]]++;
	}

	int max = 0;
	int maxIdx = 0;

	for (int i = 0; i < 65536; i++) {
		if (dat[i] && dat[i] > max) {
			max = dat[i];
			maxIdx = i;
		}
	}
	cout << maxIdx;

	return 0;
}