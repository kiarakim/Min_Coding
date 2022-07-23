#include<iostream>
#include<cstring>
using namespace std;

int main() {

	struct Coord
	{
		int y, x;
	};

	Coord input[4];
	for (int i = 0; i < 4; i++){
		cin >> input[i].y >> input[i].x;
	}

	int vect[4][3] = { 0 };

	for (int i = 0; i < 4; i++) {
		vect[input[i].y][input[i].x] = 5;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++)
			cout << vect[i][j] << ' ';
		cout << endl;
	}

    return 0;
}
