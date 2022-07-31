#include<iostream>
using namespace std;

int main() {

	int vect[8];
	for (int i = 0; i < 8; i++)
		cin >> vect[i];
	int dat[10] = { 0 };

	for (int i = 0; i < 8; i++)
		dat[vect[i]]++;

	for (int i = 0; i < 10; i++) {
		if (dat[i]) {
			for (int j = 0; j < dat[i]; j++)
				cout << i << ' ';
		}
	}

	return 0;
}