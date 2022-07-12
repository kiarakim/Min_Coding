#include<iostream>
using namespace std;

// 도플갱어
int main() {
	int arr[6];
	int i, j;

	for (i = 0; i < 6; i++)
		cin >> arr[i];
	int dat[30] = { 0 };

	for (i = 0; i < 6; i++)
		dat[arr[i]]++;

	int flag = 0;
	for (i = 0; i < 30; i++) {
		if (dat[i] > 1) {
			flag = 1;
			break;
		}
	}
	if (flag == 1)cout << "도플갱어 발견";
	else cout << "미발견";


	return 0;
}