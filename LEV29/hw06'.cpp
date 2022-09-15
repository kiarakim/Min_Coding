#include<iostream>
using namespace std;

int chain[3][4] = {
	3,2,5,3,
	7,6,1,6,
	4,9,2,7
};

void run(int x, int num) {
	int nArr[3] = { 0 };
	for (int i = 0; i < 3; i++) {
		int n = (i + num) % 3;
		nArr[n] = chain[i][x];
	}
	for (int i = 0; i < 3; i++)
		chain[i][x] = nArr[i];
}

int main() {

	int nums[4] = { 0 };
	for (int i = 0; i < 4; i++)
		cin >> nums[i];

	for (int x = 0; x < 4; x++) {
		run(x, nums[x]);
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++)
			cout << chain[y][x];
		cout << "\n";
	}

	return 0;
}