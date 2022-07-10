#include<iostream>
#include<cstring>
using namespace std;

int map[2][4] = { 1,5,10,15,15,15,19,10 };

int main() {
	int a;
	cin >> a;
	int cnt = 0;

	int dat[31] = { 0 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			/*if (map[i][j] == a)
				cnt++;*/ 
			dat[map[i][j]]++;
		}
	}

	cout << dat[a];


	return 0;
}