#include<iostream>
using namespace std;
// 왼쪽, 오른쪽 이동

int arr[5] = { 3,5,1,9,7 };
char dir[5];

void run(int lev) {
	if (lev == 4) {
		return;
	}

	if (dir[lev] == 'R') {
		int temp = arr[4];
		for (int i = 3; i >= 0; i--) 
			arr[i + 1] = arr[i];
		arr[0] = temp;
		run(lev + 1);
	}

	else if (dir[lev] == 'L') {
		int temp = arr[0];
		for (int i = 0; i < 4; i++)
			arr[i] = arr[i + 1];
		arr[4] = temp;
		run(lev + 1);
	}
}

int main() {
	for (int i = 0; i < 4; i++)
		cin >> dir[i];

	run(0);

	for (int i = 0; i < 5; i++)
		cout << arr[i] << ' ';

	return 0;
}