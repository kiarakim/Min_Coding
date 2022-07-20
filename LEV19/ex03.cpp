#include<iostream>
using namespace std;

int a[3][5] = {
	4,5,1,9,1,
	2,2,3,1,9,
	1,3,1,9,1
};
int b[3] = { 1,9,1 };
int isSame(int n1, int n2);

int main() {

	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j <= 5 - 3; j++) {
			if (isSame(i, j) == 1)
				cnt++;
		}
	}

	cout << cnt;

	return 0;
}

int isSame(int n1, int n2) {

	for (int i = 0; i < 3; i++) {
		if (b[i] != a[n1][n2+i])
			return 0;
	}
	return 1;
}