#include<iostream>
using namespace std;

int b, l;
int cnt = 0;

void run(int lev) {
	cnt++;
	if (lev == l)
		return;
	for (int i = 0; i < b; i++) {
		run(lev + 1);
	}
}

int main() {

	cin >> b >> l;
	run(0);
	cout << cnt;
	return 0;
}