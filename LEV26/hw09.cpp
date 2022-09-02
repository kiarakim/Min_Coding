#include<iostream>
using namespace std;

int main() {

	char strs[10];
	char* ptrs[4];

	cin >> strs;

	int p;
	for (int i = 0; i < 4; i++) {
		cin >> p;
		ptrs[i] = &strs[p];
	}

	for (int i = 0; i < 4; i++)
		cout << *ptrs[i];

	return 0;
}