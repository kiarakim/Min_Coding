#include<iostream>
using namespace std;

int main() {

	int v[2][2][2][3] = { 0 };

	v[0][0][1][2] = 4;
	v[0][1][1][1] = 7;
	v[1][0][1][2] = 3;
	v[1][1][1][1] = 9;

	return 0;
}