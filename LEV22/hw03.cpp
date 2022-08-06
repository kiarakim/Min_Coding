#include<iostream>
using namespace std;

int level;
char path[5];
char name[5] = "BGTK";

void run(int lev) {
	if (lev == level) {
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; i++) {
		path[lev] = name[i];
		run(lev + 1);
	}
}

int main() {
	
	cin >> level;
	run(0);

	return 0;
}