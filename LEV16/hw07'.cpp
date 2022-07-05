#include <iostream>
using namespace std;

// Three Line »öÄ¥ÇÏ±â
int main() {

	int v[7][4], x = 1;

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 4; j++)
			v[i][j] = x++;
	}

	int a, b, c;
	cin >> a >> b >> c;

	for (int i = 0; i < 7; i++) {
		if (i == a || i == b || i == c) {
			for (int j = 0; j < 4; j++)
				v[i][j] = 0;
		}
	}
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 4; j++)
			cout << v[i][j] << " ";
		cout << endl;
	}
	return 0;
}