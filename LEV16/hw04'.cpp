#include <iostream>
using namespace std;

// 누적 점핑
int main() {
	int a[6];
	cin >> a[0] >> a[1];

	for (int i = 2; i < 6; i++)
		a[i] = a[i - 2] * a[i - 1];

	cout << a[5];

	return 0;
}