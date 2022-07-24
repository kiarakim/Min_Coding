#include<iostream>
using namespace std;

int main() {

	int v[4];
	for (int i = 0; i < 4; i++)
		cin >> v[i];

	int num[4][4];
	int a = 1;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			num[i][j] = a++;
	}

	int cnt = 1;
	int dat[17] = { 0 };

	for (int i = 0; i < 4; i++)
		dat[v[i]]++;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (dat[num[i][j]] == 1) num[i][j] = cnt++;
			else num[i][j] = 0;
			cout << num[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}
