#include <iostream>
using namespace std;

//두개의 배열의 누적의 합
int main() {
	int A[4], B[4];

	for (int i = 0; i < 4; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < 4; i++) {
		cin >> B[i];
	}

	int result[4];

	for (int i = 0; i < 4; i++) {
		result[i] = A[i] + B[3 - i];
	}

	for (int i = 0; i < 4; i++) {
		cout << result[i] << " ";
	}
	return 0;
}