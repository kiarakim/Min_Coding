#include<iostream>
#include<vector>
using namespace std;

vector<int> v;

int main() {

	char name[] = "ABCD";
	int map[4][4];

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++)
			cin >> map[y][x];
	}

	int max = 0;
	int idx = 0;

	for (int y = 0; y < 4; y++) {
		int cnt = 0;
		for (int x = 0; x < 4; x++) {
			if (map[y][x]) cnt++;
		}
		if (max < cnt) {
			max = cnt;
			idx = y;
		}
	}
	cout << name[idx];
	return 0;
}