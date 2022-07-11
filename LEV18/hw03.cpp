#include<iostream>
using namespace std;

// 카운팅 값 찾기

int map[3][5] = {
	1,3,3,5,1,
	3,6,2,4,2,
	1,9,2,6,5
};

int main() {
	int N;
	cin >> N;
	int dat[10] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
			dat[map[i][j]]++;
	}

	for (int i = 1; i < 10; i++) {
		if (dat[i] == N)
			cout << i << " ";
	}

	return 0;
}