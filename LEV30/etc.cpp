#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<vector<int>> v(5);

void BFS(int start) {
	queue<int> q;
	int used[10] = { 0 };

	q.push(start);
	used[start] = 1;

	while (!q.empty()) {
		int now = q.front();
		cout << (char)(now + 'A') << ' ';
		q.pop();

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
	v[2] = { 0,1,3 };
	v[3] = { 2,4 };
	v[4] = { 3 };

	BFS(0);

	return 0;
}