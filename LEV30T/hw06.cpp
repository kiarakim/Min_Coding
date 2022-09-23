#include<iostream>
#include<vector>
using namespace std;

int r, c;
vector<vector<int>> v(10);
int used[10][10] = { 0 };

void input() {
	cin >> r >> c;
	v.resize(r);

	for (int y = 0; y < r; y++) {
		for (int x = 0; x < c; x++) {
			int a;
			cin >> a;
			v[y].push_back(a);
		}
	}
}

void find() {
	int maxi = 0;
	int my = 0, mx = 0;
	for (int y = 0; y < r; y++) {
		for (int x = 0; x < c; x++) {
			if (maxi < v[y][x]) {
				if (used[y][x] == 1) continue;
				my = y; mx = x;
				maxi = v[y][x];
			}
		}
	}
	used[my][mx] = 1;
	cout << maxi << '(' << my << ',' << mx << ')' << "\n";
}

int main() {

	input();
	
	find();
	find();
	find();

	return 0;
}