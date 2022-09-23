#include<iostream>
using namespace std;

int n;
int used[10];
int cnt = 0;

void run(int lev) {
	if (lev == 3) {
		cnt++;
		return;
	}

	for (int i = 0; i < n; i++) {
		if (used[i] == 1) continue;
		used[i] = 1;
		run(lev + 1);
		used[i] = 0;
	}
}

int main() {

	cin >> n;
	run(0);
	cout << cnt;

	return 0;
}