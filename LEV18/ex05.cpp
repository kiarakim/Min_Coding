#include<iostream>
using namespace std;

int getCount(int a);
int A[8] = { 5,6,1,1,1,1,5,4 };
int B[2][4] = { 5,5,2,6,9,1,1,3 };

int main() {
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << getCount(B[i][j]) << " ";
		}
		cout << endl;
	} 
	return 0;
}


int getCount(int a) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		if (A[i] == a)cnt++;
	}
	return cnt;
}