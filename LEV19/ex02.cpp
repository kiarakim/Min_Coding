#include<iostream>
using namespace std;

int da[9] = { 4,1,2,3,4,1,2,3,3 };
int db[3] = { 1,2,3 };
int isSame(int n);

int main() {
	int cnt = 0;
	for (int i = 0; i <= 9 - 3; i++) {
		if (isSame(i) == 1)
			cnt++;
	}

	cout << cnt;

	return 0;
}
int isSame(int n) {
	for (int i = 0; i < 3; i++) {
		if (db[i] != da[i + n])
			return 0;
	}
	return 1;
}