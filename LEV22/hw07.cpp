#include<iostream>
#include<cstring>
using namespace std;

char path[4];
char A[4];
int num = 0;

int find() {
	for (int i = 0; i < 3; i++) {
		if (A[i] != path[i])
			return 0;
	}
	return 1;
}

void run(int lev) {
	if (lev == 3) {
		num++;
		if (find())
			cout << num << "¹øÂ°";
		return;
	}
	for (int i = 0; i < 4; i++) {
		path[lev] = 'A' + i;
		run(lev + 1);
	}
}

int main() {
	cin >> A;
	run(0);
}