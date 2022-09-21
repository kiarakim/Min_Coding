#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<vector<int>> v(5);
string name = "ABCDE";

void bfs(int start) {
	queue<int> q;
	int used[5] = { 0 };

	q.push(start);
	used[start] = 1;

	while (!q.empty()) {
		int now = q.front();
		q.pop();
		cout << name[now] << ' ';

		for (int i = 0; i < v[now].size(); i++) {
			int next = v[now][i];
			if (used[next] == 1) continue;
			used[next] = 1;
			q.push(next);
		}
	}
}

int main() {

	v[0] = { 1,2 };
	v[1] = { 0,2 };
	v[2] = { 0, 1, 3 };
	v[3] = { 2, 4 };
	v[4] = { 3 };

	bfs(0);
	bfs(3);

	return 0;
}