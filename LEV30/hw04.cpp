#include<iostream>
#include<queue>
using namespace std;

int map[6][6] = {
	0,0,0,0,1,0,
	1,0,1,0,0,1,
	1,0,0,1,0,0,
	1,1,0,0,0,0,
	0,1,0,1,0,1,
	0,0,1,1,0,0
};
int used[6];

void BFS(int start) {
	queue<int> q;
	q.push(start);
	used[start] = 1;

	while (!q.empty()) {
		int now = q.front();
		cout << now << "\n";
		q.pop();

		for (int x = 0; x < 6; x++) {
			if (map[now][x] == 0) continue;
			if (used[x] == 1) continue;
			used[x] = 1;
			q.push(x);
		}
	}

}


int main() {

	int start;
	cin >> start;

	BFS(start);

	return 0;
}