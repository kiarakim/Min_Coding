#include<iostream>
using namespace std;

// 하마의 충치
int main() {

	int up[5], down[5];
	for (int i = 0; i < 5; i++)
		cin >> up[i];
	for (int i = 0; i < 5; i++)
		cin >> down[i];

	int dat[5] = { 0 };

	for (int i = 0; i < 5; i++) 
		dat[i] = up[i] + down[i];

	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		if (dat[i] == 2)
			cnt++;
	}
	cout << cnt << "개";

	return 0;
}