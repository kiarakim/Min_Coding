#include <iostream>
using namespace std;

int l, b;
void run(int lev) {
	if (lev == l) {
		return;
	}

	for (int i = 0; i < b; i++) {
		run(lev + 1);
	}
}

int main() {

	cin >> l >> b;
	run(0);

	return 0;
}