#include <iostream>
using namespace std;

// 인기투표

int main() {
	int vect[3][3] = { 3,7,4,2,2,4,2,2,5 };
	int target[3];
	cin >> target[0] >> target[1] >> target[2];

	int cnt[3] = { 0 };
	int max = -1, m;

	for (int x = 0; x < 3; x++) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (vect[i][j] == target[x])
					cnt[x]++;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		if (cnt[i] > max) {
			max = cnt[i];
			m = i;
		}
	}
	cout << target[m];

	return 0;
}
