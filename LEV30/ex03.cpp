#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<vector<int>> v(7);
queue<int> q;

int main() {

	v[5] = { 3,1 };
	v[3] = { 2 };
	v[1] = { 4 };
	v[4] = { 0,6 };

	q.push(5);
	while (!q.empty()) {
		// 1. 큐에 뺀다(탐색)
		int now = q.front();
		q.pop();
		cout << now << " ";

		// 2. 다음 갈 곳 예약걸기(큐 등록)
		for (int i = 0; i < v[now].size(); i++) {
			int next = v[now][i];
			q.push(next);
		}
	}

	return 0;
}