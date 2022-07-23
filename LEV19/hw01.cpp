#include<iostream>
using namespace std;

int arr[3][3] = {
	{3, 5, 4},
	{1, 1, 2},
	{1, 3, 9}
};

int main() {

	int y, x;
	cin >> y >> x;

	
	int directY[4] = { -1,1,0,0 };
	int directX[4] = { 0,0,-1,1 };

	int sum = 0;

	for (int i = 0; i < 4; i++) {
		int dy = y + directY[i];
		int dx = x + directX[i];

		if (dy < 0 || dx < 0 || dy >= 3 || dx >= 3) continue;
		sum += arr[dy][dx];
	}

	cout << sum;

	return 0;
}
