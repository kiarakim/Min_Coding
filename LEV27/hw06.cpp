#include<iostream>
using namespace std;

int cube[3][3] = {
	0,5,4,
	3,0,0,
	0,0,1
};

int result[3][3];

void rotate() {
	int i = 2;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			result[x][i] = cube[y][x];
		}
		i--;
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cube[y][x] = result[y][x];
		}
	}

}

int main() {


	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		rotate();
	 
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (result[y][x])
				cout << result[y][x];
			else
				cout << '_';
		}
		cout << endl;
	}

	return 0;
}