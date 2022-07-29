#include<iostream>
using namespace std;

void run(int lev) {
	if (lev == 2) {
		return;
	}
	for (int i = 0; i < 2; i++) {
		cout << i;
		run(lev + 1);
		cout << i;
	}
}

int main() {
	run(0);

	return 0;
}

// 000110100111