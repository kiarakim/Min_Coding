#include<iostream>
using namespace std;

int main() {

	int map[4][3] = {
		1,5,3,
		4,5,5,
		3,3,5,
		4,6,2
	};

	int a, b;
	cin >> a >> b;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			if (map[i][j] >= a && map[i][j] <= b)
				map[i][j] = 0;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			if (map[i][j] == 0)
				cout << "# ";
			else
				cout << map[i][j] << ' ';
		}cout << endl;
	}
	
	return 0;
}