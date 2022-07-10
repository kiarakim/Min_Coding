#include<iostream>
using namespace std;

int v1[5] = { 5,4,2,5,6 };
int v2[6] = { 5,7,5,4,2,9 };
int isExist(int a);

int main() {
	
	for (int i = 0; i < 6; i++) {
		if (isExist(v2[i]) == 1) cout << "O ";
	else cout << "X ";
	}
}  

int isExist(int a) {
	for (int i = 0; i < 5; i++) {
		if (v1[i] == a) return 1;
	}
	return 0;
}