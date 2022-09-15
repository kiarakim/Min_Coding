#include<iostream>
using namespace std;

int main() {

	int blk[4][5];
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 5; x++)
			cin >> blk[y][x];
	}

	int my = 3, mx = 4, My = 0, Mx = 0;

	for (int x = 0; x < 5; x++) {
		for (int y = 0; y < 4; y++) {
			if (blk[y][x]) {
				if (my > y) my = y;
				if (My < y) My = y;
				if (mx > x) mx = x;
				if (Mx < x) Mx = x;
			}
		}
	}
	
	cout << '(' << my << ',' << mx << ')' << "\n";
	cout << '(' << My << ',' << Mx << ')' << "\n";
	return 0;
}