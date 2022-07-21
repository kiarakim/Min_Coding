#include<iostream>
using namespace std;

int a[2][4] = {
	4,5,4,5,
	5,5,4,5
};

int b[2][2] = {
	4,5,
	4,5
};

int isSame(int n);

int main() {

	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		if (isSame(i) == 1)
			cnt++;
	}

	cout << cnt;

	return 0;
}
int isSame(int n) {//n=2
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (b[i][j] != a[i][j + n])
				return 0;
		}
	}
	return 1;
}