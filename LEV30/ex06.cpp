#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct Node{
	int n;
	int lev;
};

vector<vector<int>> v(5);
queue<Node> q;
int used[5] = { 0 };
string name = "ABCDE";

void bfs(int start, int end) {
	
	q.push({ start, 0 });
	used[start] = 1;

	while (!q.empty()) {
		Node now = q.front();
		q.pop();

		if (now.n == end) {
			cout << now.lev;
			return;
		}

		for (int i = 0; i < v[now.n].size(); i++) {
			int next = v[now.n][i];

			if (used[next] == 1) continue;
			used[next] = 1;

			q.push({ next, now.lev + 1 });
		}
	}
}

int main() {


	v[0] = { 1,4 };
	v[1] = { 3,4 };
	v[2] = { 0 };
	v[3] = { 0,2 };

	char ch1, ch2;
	cin >> ch1 >> ch2;
	
	int a = ch1 - 'A';
	int b = ch2 - 'A';
	

	bfs(a, b);

	return 0;
}