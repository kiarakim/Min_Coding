#include<iostream>
using namespace std;

char path[10];
int used[7] = { 0 };
int n;

void run(int lev, int sum) {

	if (sum >= 10) return;

	if (lev == n) {
		cout << path << endl;
		return;
	}

	for (int i = 1; i <= 6; i++) {

		if (used[i] == 1) continue;
		used[i] = 1;
		path[lev] = '0' + i;
		//if (sum + i >= 10) continue;
		run(lev + 1, sum + i);
		used[i] = 0;
	}
}

int main() {
	
	cin >> n;
	run(0, 0);

	return 0;
}