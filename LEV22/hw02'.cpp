#include<iostream>
using namespace std;

int n;
char path[3];
char ox[3] = "xo";

void run(int lev) {
	if (lev == n) {
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 2; i++) {
		path[lev] = ox[i];
		run(lev + 1); 
	}
}

int main() {

	cin >> n;

	run(0);

	return 0;
}