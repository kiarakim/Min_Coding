#include<iostream>
#include<vector>
using namespace std;

int main() {

	int map[8][8] = {
		0,1,1,1,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,1,1,1,0,
		0,0,0,0,0,0,0,1,
	};

	char name[] = "ABHCDGEF";

	char ch;
	cin >> ch;
	int n = 0;

	for (int i = 0; i < 8; i++) {
		if (name[i] == ch)
			n = i;
	}
	int boss = -1;

	for (int y = 0; y < 8; y++) {
		if (map[y][n])
			boss = y;
	}

	if (boss == -1) {
		cout << "없음";
		return 0;
	}
	int cnt = 0;
	for (int x = 0; x < 8; x++) {
		if (x == n) continue;
		if (map[boss][x]) {
			cout << name[x] << ' ';
			cnt++;
		}
	}
	if (cnt == 0) cout << "없음";
	
	return 0;
}