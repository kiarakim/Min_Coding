#include<iostream>
using namespace std;

char path[10];
char name[7] = "ERATKZ";
int used[7] = { 0 };

void run(int lev) {



	if (lev == 4) {
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 6; i++) {

		if (used[i + 1] == 1) continue;
		used[i + 1] = 1;
		path[lev] = name[i];

		run(lev + 1);
		used[i + 1] = 0;
	}
}

int main() {

	run(0);

	return 0;
}