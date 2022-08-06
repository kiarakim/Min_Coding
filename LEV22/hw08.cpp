#include<iostream>
using namespace std;

int v[3][2][2] = {
	2,4,
	1,5,

	2,3,
	3,6,

	7,3,
	1,5
};

int main() {

	int max = -99;
	int min = 99;

	int n;
	cin >> n;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (max < v[n][i][j])
				max = v[n][i][j];
			if (min > v[n][i][j])
				min = v[n][i][j];
		}
	}

	cout << "MAX=" << max << endl;
	cout << "MIN=" << min << endl;

	return 0;
}