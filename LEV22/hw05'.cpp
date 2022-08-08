#include<iostream>
using namespace std;

int main() {

	int MAP[3][6] = {
		3,5,4,2,2,3,
		1,3,3,3,4,2,
		5,4,4,2,3,4
	};

	char price[6] = { "TPGKC" };

	char ch, n;

	cin >> ch >> n;

	int idx = MAP[ch - 'A'][n - '1'];

	cout << price[idx - 1];

	return 0;
}