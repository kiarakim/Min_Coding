#include<iostream>
#include<vector>
using namespace std;

int map[6][6] = {
	0,2,6,3,0,0,
	2,0,7,4,0,0,
	6,7,0,0,0,0,
	3,4,2,0,0,0,
	0,0,1,0,0,7,
	0,0,0,0,0,0
};
int used[6];

void run(int now) {

	cout << now << ' ';

	for (int i = 0; i < 6; i++) {
		if (map[now][i] == 0) continue;
		if (used[i] == 1) continue;
		used[i] = 1;
		run(i);
	}
}

void runPath(int now) {

	cout << now << ' ';

	for (int i = 0; i < 6; i++) {
		if (map[now][i] == 0) continue;
		if (used[i] == 1) continue;
		used[i] = 1;
		runPath(i);
		used[i] = 0;
	}
}

int main() {

	used[4] = 1;
	run(4); // 모든 노드
	//runPath(4); // 모든 경로

	return 0;
}