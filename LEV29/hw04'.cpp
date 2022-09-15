#include<iostream>
using namespace std;

int main() {

	int A[4], B[4], C[8];

	for (int i = 0; i < 4; i++)
		cin >> A[i];
	for (int i = 0; i < 4; i++)
		cin >> B[i];

	int idx = 0;
	int a = 0, b = 0;
	
	while (a < 4 && b < 4) {
		if (A[a] < B[b])
			C[idx++] = A[a++];
		else
			C[idx++] = B[b++];
	}

	while (a < 4)
		C[idx++] = A[a++];
	while (b < 4)
		C[idx++] = B[b++];

	for (int i = 0; i < 8; i++)
		cout << C[i] << ' ';
		

	return 0;
}