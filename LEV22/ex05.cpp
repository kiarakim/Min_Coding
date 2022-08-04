#include<iostream>
using namespace std;

char path[10];
int arr[10];
int level = 3;

void run(int lev) {

	if (lev == level) {
		cout << path << endl;
		return;
	}

	for (int i = 1; i <= 9; i++) {
		path[lev] = '0' + i;
		run(lev + 1);
		path[lev] = 0;
	}
}

int main() {

	for (int i = 0; i < 9; i++)
		arr[i] = i;

	run(0);
	level++;
	run(0);
	level++;
	run(0);

	return 0;
}