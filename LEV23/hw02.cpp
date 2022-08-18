#include<iostream>
using namespace std;

char path[6];
char name[5];
int cnt;

void run(int lev) {

	if (lev > 1) {
		if (path[lev - 2] == 'B' && path[lev - 1] == 'T') return;
		if (path[lev - 2] == 'T' && path[lev - 1] == 'B') return;
	}

	if (lev == 4) {
		cnt++;
		return;
	}

	for (int i = 0; i < 4; i++) {
		path[lev] = name[i];
		run(lev + 1);
	}
}

int main() {

	cin >> name;
	run(0);

	cout << cnt;

	return 0;
}