#include<iostream>
using namespace std;

int map[6][6] = {
	0,0,1,1,0,1,
	0,0,0,1,1,1,
	0,0,0,0,1,1,
	0,0,0,0,0,0,
	1,0,0,0,0,1,
};
int used[6];

void DFS(int now) {

	cout << now << ' ';

	for (int x = 0; x < 6; x++) {
		if (map[now][x] == 0) continue;
		if (used[x] == 1) continue;
		used[x] = 1;
		DFS(x);
	}
}

int main() {

	int start;
	cin >> start;

	used[start] = 1;
	DFS(start);

	return 0;
}