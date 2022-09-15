#include<iostream>
#include<string>
#include<vector>
using namespace std;

int N;
vector<vector<int>> v;

void run(int now) {

	cout << now << ' ';

	for (int x = 0; x < N; x++) {
		if (v[now][x] == 0) continue;
		run(x);
	}

}

int main() {

	cin >> N;
	v.resize(N);
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			int a;
			cin >> a;
			v[y].push_back(a);
		}
	}

	run(0);

	return 0;
}