#include<iostream>
using namespace std;

int n;
char path[10];

void run(int lev) {
	if (lev == 4) {
		cout << path << endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		path[lev] = '1' + i;
		run(lev + 1);
	}
}


int main() {
	cin >> n;
	run(0);

	return 0;
}