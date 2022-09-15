#include<iostream>
#include<vector>
using namespace std;

int map[3][3] = {
	0,1,1,
	0,0,1,
	1,0,0
};

int used[3];
int cnt = 0;
void run(int now) {

	if (now == 2) {
		cnt++;
		return;
	}

	for (int i = 0; i < 3; i++) {
		if (map[now][i] == 0) continue;
		if (used[i] == 1) continue;

		used[i] = 1;
		run(i);
		used[i] = 0;
	}

}

int main() {

	used[0] = 1;
	run(0);
	cout << cnt << "°³";

	return 0;
}