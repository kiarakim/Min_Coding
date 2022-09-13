#include<iostream>
#include<vector>
using namespace std;

int n;
vector<vector<int>> v(10);

int isNone(int now) {
	for (int i = 0; i < 8; i++) {
		if (v[now][i] == 1)
			return 0;
	}
	return 1;
}

void run(int now) {

	
	if (isNone(now)) {
		cout << now << ' ';
		return;
	}

	for (int i = 0; i < n; i++) {
		if (v[now][i])
			run(i);
	}
}

int main() {

	cin >> n;

	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			int a;
			cin >> a;
			v[y].push_back(a);
		}
	}

	run(0);

	return 0;
}