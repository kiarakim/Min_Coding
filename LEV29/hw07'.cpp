#include<iostream>
using namespace std;

int map[5];
void printLife(int life, int index) {
	for (int i = 0; i < 5; i++) {
		if (index >= 5 || life == 0) cout << '_';
		else {
			if (i == index) cout << life;
			else cout << '_';
		}
	}
	cout << "\n";
}

int main() {


	int index, life;
	cin >> index >> life;

	for (int i = life; i >= 0; i--) {
		printLife(i, index);
		index++;
	}

	return 0;
}