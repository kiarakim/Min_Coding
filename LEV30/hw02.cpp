#include<iostream>
using namespace std;

int map[6][6] = {
	0,0,1,7,2,0,
	5,0,3,0,0,0,
	0,0,0,0,0,7,
	2,0,0,0,8,0,
	0,0,9,0,0,0,
	4,0,0,7,0,0
};
int used[6];

void DFS(int now, int weight) {

	cout << now << ' ' << weight << "\n";

	for (int x = 0; x < 6; x++) {
		if (map[now][x] == 0) continue;
		if (used[x] == 1) continue;
		used[x] = 1;
		DFS(x, weight + map[now][x]);
	}

}

int main() {

	int start;
	cin >> start;
	used[start] = 1;

	DFS(start, 0);

	return 0;
}