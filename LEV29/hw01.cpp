#include<iostream>
#include<vector>
using namespace std;

int n;
vector<vector<int>> v;

void run(int now) {

	cout << now << ' ';

	for (int x = 0; x < n; x++) {
		if (v[now][x] == 0) continue;
		run(x);
	}
}

int main() {

	cin >> n;
	v.resize(n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			v[i].push_back(a);
		}
	}
	run(0);

	return 0;
}