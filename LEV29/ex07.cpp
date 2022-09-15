#include<iostream>
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
int a, b;
int cnt = 0;
int maxx = -1;
int minn = 99;

void run(int now) {

	cout << now << ' ';

	for (int i = 0; i < 6; i++) {
		if (map[now][i] == 0) continue;
		if (used[i] == 1) continue;
		used[i] = 1;
		run(i);
	}
}

void runPath(int now, int sum) {

	if (now == b) {
		cnt++;
		if (maxx < sum) maxx = sum;
		if (minn > sum) minn = sum;
		return;
	}
	for (int i = 0; i < 6; i++) {
		if (map[now][i] == 0) continue;
		if (used[i] == 1) continue;
		used[i] = 1;
		runPath(i, sum + map[now][i]);
		used[i] = 0;
	}
}

int main() {

	cin >> a >> b;
	//used[a] = 1;
	// 
	runPath(a, 0); // 모든 경로
	//run(4); // 모든 노드

	cout << cnt << "\n";
	cout << "max : " << maxx << "\n";
	cout << "min : " << minn << "\n";

	return 0;
}