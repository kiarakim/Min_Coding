#include<iostream>
#include<vector>
using namespace std;

int path[3] = { 0 };
int N;
vector<vector<int>> v;

void run(int lev, int now) {

	if (lev == 2) {
		for (int i = 0; i < 3; i++) {
			cout << path[i] << ' ';
		}
		cout << "\n";
		return;
	}

	for (int x = 0; x < N; x++) {
		if (v[now][x] == 0) continue;
		int next = x;
		path[lev + 1] = next;
		run(lev + 1, next);
		path[lev + 1] = 0;
	}
}

int main() {

	cin >> N;
	v.resize(N);
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			int a;
			cin >> a;
			v[y].push_back(a);
		}
	}

	run(0, 0);

	return 0;
}