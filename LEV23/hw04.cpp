#include<iostream>
using namespace std;
// 산타 소년단

char path[10];
char name[6] = "BTSKR";
int dat[26] = { 0 };
int cnt;
int n;

int isS() {
	for (int i = 0; i < n; i++) {
		if (path[i] == 'S')
			return 1;
	}
	return 0;
}

void run(int lev) {

	if (lev == n) {
		if (isS())
			cnt++;
		return;
	}

	for (int i = 0; i < 5; i++) {
		if (dat[name[i] - 'A'] == 1) continue;
		dat[name[i] - 'A'] = 1;
		path[lev] = name[i];
		run(lev + 1);
		dat[name[i] - 'A'] = 0;
	}

}

int main() {

	cin >> n;

	run(0);

	cout << cnt;

	return 0;
}