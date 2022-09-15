#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<vector<int>> v;
string name;

void run(int now) {

	cout << name[now];

	for (int x = 0; x < 8; x++) {
		if (v[now][x] == 0) continue;
		run(x);
	}

}

int main() {

	cin >> name;

	v.resize(8);

	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			int a;
			cin >> a;
			v[y].push_back(a);
		}
	}

	run(0);

	return 0;
}