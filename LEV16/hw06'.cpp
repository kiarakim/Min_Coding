#include <iostream>
using namespace std;

// 함수를 이용하여 max, min값 찾기

char a[11];
int maxIndex(char a[]);
int minIndex(char a[]);

int main() {

	cin >> a;

	cout << maxIndex(a) << endl << minIndex(a);
	return 0;
}

int maxIndex(char a[]) {
	char max = 'A', idx = 0;

	for (int i = 0; i < 10; i++) {
		if (a[i] > max) {
			max = a[i];
			idx = i;
		}
	}
	return idx;
}

int minIndex(char a[]) {
	char min = 'Z', idx = 0;

	for (int i = 0; i < 10; i++) {
		if (a[i] < min && a[i]) {
			min = a[i];
			idx = i;
		}
	}
	return idx;
}