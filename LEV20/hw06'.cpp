#include<iostream>
using namespace std;

int main() {

	int v[7];
	for (int i = 0; i < 7; i++)
		cin >> v[i];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 + i; j++)
			cout << v[j] << ' ';
		cout << endl;
	}

	return 0;
}