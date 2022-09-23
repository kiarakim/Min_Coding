#include<iostream>
#include<queue>
using namespace std;

int tree[6][6];
char path[7];

void input() {
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 6; x++)
			cin >> tree[y][x];
	}
	path[0] = 'A';
}

int isDone(int now) {
	for (int x = 0; x < 6; x++) {
		if (tree[now][x] == 1) return 1;
	}
	return 0;
}

void run(int now) {

	if (isDone(now) == 0) {
		cout << path << "\n";
		return;
	}

	for (int x = 0; x < 6; x++) {
		if (tree[now][x] == 0) continue;
		path[now + 1] = x + 'A';
		run(x);
		path[now + 1] = 0;
	}

	
}

int main() {

	input();

	run(0);


	return 0;
}