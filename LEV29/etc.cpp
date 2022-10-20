#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Node {
	int n;
	int price;
};

vector<vector<Node>> v(4);
int used[10];

void run(int now, int sum) {

	if (now == 2) {
		cout << sum << "\n";
		return;
	}

	for (int i = 0; i < v[now].size(); i++) {
		Node next = v[now][i];

		if (used[next.n] == 1) continue;
		used[next.n] = 1;
		run(next.n, sum + next.price);
		used[next.n] = 0;

	}
}

int main() {

	v[0] = { {1,5},{3,8} };
	v[1] = { {2,6} };
	v[3] = { {1,7},{2,9} };
	
	run(0, 0);

	return 0;
}