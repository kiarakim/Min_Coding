#include <iostream>
using namespace std;

void bts(int i) {
	// abc안에 있는 변수 n이 3이고, abc 안에 있는 변수 i가 1일 때 문제가 생겼다?
	cout << i;
}

void abc(int n) {
	for (int i = 0; i < 4; i++) {
		if (n == 3 && i == 1) {
			int d = 1;
		}
		bts(i);
	}
}

int main() {
	
	for (int i = 0; i < 5; i++) {
		abc(i);
	}

	return 0;
}