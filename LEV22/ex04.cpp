#include<iostream>
using namespace std;

char path[10];
char arr[6] = "ABTRG";

void run(int lev) {
	if (lev == 4) {
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 5; i++) {
		path[lev] = arr[i];
		run(lev + 1);
		path[lev] = 0;
	}
}

int main() {

	run(0);

	return 0;
}