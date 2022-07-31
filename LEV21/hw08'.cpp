#include<iostream>
#include<cstring>
using namespace std;

char stage[5][4] = {"___","___","ATK","___","___"};
int dirY[4] = {-1,1,0,0};
int dirX[4] = {0,0,-1,1};

int change(int m, int o) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			if (stage[i][j] == m) {
				stage[i + dirY[o]][j + dirX[o]] = m;
				stage[i][j] = '_';
				return 0;
			}
		}
	}
}

int main() {

	for (int i = 0; i < 7; i++) {
		int o;
		char m, order[6];
		cin >> m >> order;
		if (strcmp(order, "UP") == 0) o = 0;
		else if (strcmp(order, "DOWN") == 0) o = 1;
		else if (strcmp(order, "LEFT") == 0) o = 2;
		else if (strcmp(order, "RIGHT") == 0) o = 3;
		change(m, o);
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			cout << stage[i][j];
		}cout << endl;
	}

	return 0;
}