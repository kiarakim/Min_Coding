#include<iostream>
using namespace std;
// 바로 전 숫자와 다르게

char path[10];
void run(int lev, int sum) {

	
	//if (lev >= 2 && path[lev - 2] == path[lev - 1]) return;

	if (lev == 3) {
		cout << path << endl;
		return;
	}

	for (int i = 1; i <= 6; i++) {

		path[lev] = '0' + i;
		if (lev > 0 && path[lev - 1] == path[lev]) continue;
		run(lev + 1, sum + i);
	}
}

int main() {

	run(0, 0);

	return 0;
}