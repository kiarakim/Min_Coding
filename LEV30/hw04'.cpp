#include<iostream>
#include<vector>
using namespace std;

vector<string> v(3);
int maxlen = 0, maxIdx = 0;

void compare(int& oldIdx, int newIdx) {
	int idx = oldIdx;
	for (int k = 0; k < maxlen; k++) {
		if (v[idx][k] != v[newIdx][k]) {
			if (v[newIdx][k] == '1') {
				oldIdx = newIdx;
				return;
			}return;
		}
	}
}

int main() {
	
	cin >> v[0] >> v[1] >> v[2];

	for (int i = 0; i < 3; i++) {
		if (maxlen == v[i].size()) 
			compare(maxIdx, i);
		if (maxlen < v[i].size()) {
			maxlen = v[i].size();
			maxIdx = i;
		}
	}

	cout << v[maxIdx];


	return 0;
}