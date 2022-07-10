#include<iostream>
using namespace std;

int A[6] = { 4,2,5,3,7,6 };
int B[3] = { 5,3,7 };


int main() {
	int n;
	cin >> n;

	//flag ±¸Çö
	int flag = 1;
	for (int i = 0; i < 3; i++) {
		if (A[i + n] != B[i]) {
			flag = 0;
			break;
		}
	}
	if (flag == 1)cout << "O";
	else cout << "X"; 

	return 0;
}