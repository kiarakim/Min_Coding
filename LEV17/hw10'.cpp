#include <iostream>
using namespace std;

// masking 후 범위 안의 숫자 존재 여부 구하기 

int map[3][3] = { 3,1,9,7,2,1,1,0,8 };
int isExist(int arr[3][3]);

int main() {

	int bit[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cin >> bit[i][j];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (bit[i][j])
				bit[i][j] = map[i][j];
		}
	}
	if (isExist(bit))
		cout << "발견";
	else
		cout << "미발견";

	return 0;
}

int isExist(int arr[3][3]) {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] >= 3 && arr[i][j] <= 5)
				return 1;
		}
	}
	return 0;
}