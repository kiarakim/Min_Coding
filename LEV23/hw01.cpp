#include<iostream>
using namespace std;
// 1등, 2등, 3등 선물주기

char path[10];
char name[5];
int used[4];

void run(int lev) {

	if (lev == 3) {
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (used[i] == 1) continue;
		used[i] = 1;
		path[lev] = name[i];
		run(lev + 1);
		used[i] = 0;
	}
}

int main() {

	cin >> name;
	run(0);


	return 0;
}