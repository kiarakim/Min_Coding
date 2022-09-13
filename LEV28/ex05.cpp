#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> v(6);
char path[10];

void run(int lev, int now) {

	cout << (char)('A' + now);

	for (int i = 0; i < v[now].size(); i++) {
		int next = v[now][i];
		path[lev + 1] = 'A' + next;
		run(lev + 1, next);
		path[lev + 1] = 0;
	}
}

int main() {

	v[0] = { 1,2 };
	v[1] = { 3 };
	v[2] = { 4,5 };

	path[0] = 'A';
	run(0, 0);

	return 0;
}