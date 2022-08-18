#include<iostream>
using namespace std;
// ABCÃÊÄİ¸´

char path[10];
char name[4] = "ABC";
int cnt;
int n;

int isPossible(int level) {
	if (level < 3) return 1;
	if (path[level - 3] != path[level - 2]) return 1;
	if (path[level - 2] != path[level - 1]) return 1;

	return 0;
}

void run(int lev) {

	if (isPossible(lev) == 0) return;

	if (lev == n) {
		cnt++;
		return;
	}

	for (int i = 0; i < 3; i++) {
		path[lev] = name[i];
		run(lev + 1);
	}
}

int main() {

	cin >> n;

	run(0);

	cout << cnt;

	return 0;
}