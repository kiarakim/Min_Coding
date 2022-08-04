#include<iostream>
using namespace std;

// OOOOO ~ XXXXX

char path[6];
char ox[3] = "OX";

void run(int lev) {
	if (lev == 5) {
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 2; i++) {
		path[lev] = ox[i];
		run(lev + 1);
	}
}

int main() {

	run(0);

	return 0;
}