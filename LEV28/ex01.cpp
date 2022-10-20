#include<iostream>
using namespace std;

int main() {
	//int map[5][5] = {
	//	0,1,0,0,0,
	//	0,0,1,1,0,
	//	0,1,0,0,0,
	//	0,0,0,0,0,
	//	0,1,0,0,0
	//};

	/*int n;
	cin >> n;*/

	//char c;
	//cin >> c;
	//int n = c - 'A';

	//for (int i = 0; i < 5; i++) {
	//	if (map[n][i] == 1)
	//		cout << (char)(i + 'A') << ' ';
	//}

	char name[5] = "BTAR";
	int map[4][4] = {
		0,0,0,0,
		1,0,0,0,
		1,1,0,0,
		1,1,0,0
	};

	int n;
	cin >> n;
	for (int x = 0; x < 4; x++) {
		if (map[n][x])
			cout << name[x];
	}

	return 0;
}