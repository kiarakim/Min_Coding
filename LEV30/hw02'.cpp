#include<iostream>
using namespace std;

int n;
char name[3] = "ox";
char path[10];
int used[10];

void run(int lev) {
	if (lev == n) {
		cout << path << "\n";
		return;
	}

	for (int i = 0; i < 2; i++) {
		//if (used[lev] == 1) continue;
		//used[lev] = 1;
		path[lev] = name[i];
		run(lev + 1);
		//used[lev] = 0;
	}
}

int main() {

	cin >> n;

	run(0);

	return 0;
}