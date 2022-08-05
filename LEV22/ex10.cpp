#include<iostream>
using namespace std;

int card[5] = { 4,5,1,9,-6 };
int tar = 12;
int isFind;
int path[3];

void run(int lev, int sum) {
	if (lev == 3) {
		if (sum == tar) {
			isFind = 1;
		}
		return;
	}
	for (int i = 0; i < 5; i++) {
		path[lev] = card[i];
		run(lev + 1, sum + card[i]);
		if (isFind) return;
	}
}

int main() {

	run(0, 0);
	if (isFind) cout << "있다";
	else cout << "없다";

	return 0;
}