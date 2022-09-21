#include<iostream>
#include<queue>
using namespace std;

int cc[3][3] = {
	0,12,0,
	9,0,3,
	0,6,0
};

int dirY[4] = { -1,0,0,1 };
int dirX[4] = { 0,-1,1,0 };
int cY[4] = { 1,0,2,1 };
int cX[4] = { 2,1,1,0 };

void rotate(int n) {

	int newCC[3][3] = { 0 };
	for (int cnt = 0; cnt < n; cnt++) {
		for (int i = 0; i < 4; i++) {
			int dy = 1 + dirY[i];
			int dx = 1 + dirX[i];

			newCC[cY[i]][cX[i]] = cc[dy][dx];
		}
		for (int i = 0; i < 4; i++) {
			int dy = 1 + dirY[i];
			int dx = 1 + dirX[i];

			cc[dy][dx] = newCC[dy][dx];
		}
	}

	for (int i = 0; i < 4; i++) {
		int dy = 1 + dirY[i];
		int dx = 1 + dirX[i];
		cout << newCC[dy][dx] << ' ';
	}


}

int main() {

	int angle;
	cin >> angle;

	int n = (angle / 90) % 4;

	rotate(n);

	return 0;
}

/*
#include<iostream>
using namespace std;

int arr[3][3] = {
	0,12,0,
	9,0,3,
	0,6,0
};

void turn()
{
	int temp = arr[1][0];
	arr[1][0] = arr[2][1];
	arr[2][1] = arr[1][2];
	arr[1][2] = arr[0][1];
	arr[0][1] = temp;
}
int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n / 90; i++) {
		turn();
	}

	cout << arr[0][1] << " ";
	cout << arr[1][0] << " ";
	cout << arr[1][2] << " ";
	cout << arr[2][1] << endl;

	return 0;
}
*/