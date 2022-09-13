#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<string> v = { "Amy", "Bob", "Chloe", "Edger", "Diane" };

	int map[5][5] = {
		0,0,0,1,0,
		1,0,0,0,0,
		0,1,0,0,0,
		0,0,0,0,0,
		0,1,0,0,0
	};

	int max = -1;
	int idx = 0;
	for (int i = 0; i < 5; i++) {
		int cnt = 0;
		for (int j = 0; j < 5; j++) {
			cnt += map[j][i];
		}
		if (max < cnt) {
			max = cnt;
			idx = i;
		}
	}

	cout << v[idx];

	return 0;
}