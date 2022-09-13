#include<iostream>
#include<vector>
using namespace std;

int main() {

	int n;
	cin >> n;

	vector<vector<int>> v(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			v[i].push_back(a);
		}
	}

	cout << "boss:";
	for (int y = 0; y < n; y++) {
		if (v[y][0] == 1)
			cout << y << "\n";
	}

	cout << "under:";
	for (int x = 0; x < n; x++) {
		if (v[0][x] == 1) {
			cout << x << ' ';
		}
	}

	return 0;
}