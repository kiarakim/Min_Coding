#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<vector<int>> v(6);
char path[10];

void DFS(int lev, int now) {
	


	for (int i = 0; i < v[now].size(); i++) {
		int next = v[now][i];
		path[lev + 1] = next + 'A';
		DFS(lev + 1, next);
		path[lev + 1] = 0;
	}

}

int main() {

	v[0] = { 1,2 };
	v[1] = { 3 };
	v[2] = { 4,5 };

	path[0] = 'A';
	DFS(0, 0);

	return 0;
}