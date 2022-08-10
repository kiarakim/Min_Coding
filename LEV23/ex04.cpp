#include<iostream>
using namespace std;
// 모든 숫자가 다르게

char path[10];
int used[7] = { 0 };
void run(int lev) {

	

	if (lev == 3) {
		cout << path << endl;
		return;
	}

	for (int i = 1; i <= 6; i++) {
		if (used[i] == 1) continue;
		used[i] = 1;
		path[lev] = '0' + i;
		run(lev + 1);
		used[i] = 0;
	}
}

int main() {

	run(0);

	return 0;
}