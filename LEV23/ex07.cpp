#include<iostream>
using namespace std;
// 부정선거. T는 1등 할 수 없음

char path[10];
char map[3][3] = {
	4,5,-1,
	2,-3,-4,
	0,1,2
};
int dat[3000];
int used[3][3];
int cnt;

void run(int lev, int gop) {

	if (lev == 4) {
		if (dat[gop + 1000] == 0) cnt++;
		dat[gop + 1000] = 1; 
		return;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			if (used[i][j] == 1) continue;
			used[i][j] = 1;
			run(lev + 1, gop * map[i][j]);
			used[i][j] = 0;
		}
	}
}

int main() {

	run(0, 1);

	cout << cnt;

	return 0;
}