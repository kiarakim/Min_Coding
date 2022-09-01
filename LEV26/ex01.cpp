#include<iostream>
using namespace std;

struct strD {
	char ch;
	int vect[3];
};

int main() {

	strD g1 = { 'A', {1,3,7} };
	strD g2 = { 'C', {9,9,9} };

	cout << g1.ch << "\n";
	for (int i = 0; i < 3;i++)
		cout << g1.vect[i] << ' ';
	cout << "\n" << g2.ch << "\n";
	for (int i = 0; i < 3; i++)
		cout << g2.vect[i] << ' ';

	return 0;
}