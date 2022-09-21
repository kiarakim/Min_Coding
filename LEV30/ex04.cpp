#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<vector<int>> v(7);
queue<char> q;
string name = "ACBQTPR";


int main() {

	v[0] = { 1,2,3 };
	v[2] = { 4 };
	v[3] = { 5,6 };

	q.push(0);

	while (!q.empty()) {
		int now = q.front();
		q.pop();
		cout << name[now] << ' ';

		for (int i = 0; i < v[now].size(); i++) {
			int next = v[now][i];
			q.push(next);
		}
	}

	return 0;
}