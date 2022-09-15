#include<iostream>
using namespace std;

int graph[6][6] = {
	0,0,1,0,1,1,
	1,0,0,1,0,0,
	0,0,0,0,1,0,
	1,0,0,0,0,0,
	1,0,0,0,0,0,
	0,0,0,0,0,0
};
int used[6] = { 0 };
int a, b;
int cnt = 0;

void run(int now) {

	if (now == b - 1) {
		for (int i = 0; i < 6; i++) {
			if (used[i]) cnt++;
		}
	}

	for (int x = 0; x < 6; x++) {
		if (graph[now][x] == 0) continue;
		if (used[x] == 1) continue;
		used[x] = 1;
		run(x);
		used[x] = 0;
	}
}

int main() {
	
	cin >> a >> b;

	run(a - 1);

	cout << cnt;

	return 0;
}