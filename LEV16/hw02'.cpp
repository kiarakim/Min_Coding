#include <iostream>
using namespace std;

// 알파벳 순서대로 배열 채우기
int main() {
	
	char a[6][3];
	char ch = 65;

	for (int j = 2; j >= 0; j--) {
		for (int i = 5; i >= 0; i--) {
			a[i][j] = ch++;
		}
	}

	int i, j;
	cin >> i >> j;

	cout << a[i][j];

	return 0;
}