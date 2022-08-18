#include<iostream>
#include<cstdlib>
using namespace std;
// �ټ������� ����ī��

char org[6];
int path[6];
int card[5];
int cnt;

void run(int lev) {

	if (lev > 1  && abs(path[lev - 2] - path[lev - 1]) > 3) return;

	if (lev == 4) {
		cnt++;
		return;
	}

	for (int i = 0; i < 5; i++) {
		path[lev] = card[i];
		run(lev + 1);
	}
}

int main() {

	cin >> org;
	for (int i = 0; i < 5; i++) {
		card[i] = (int)org[i] - 48;
	}

	run(0);

	cout << cnt;

	return 0;
}