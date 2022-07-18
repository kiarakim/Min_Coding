#include<iostream>
using namespace std;

// 사법고시 합격자 발표

int main() {

	int win[2][3] = {
		3,5,1,
		4,2,6
	};
	int people[4];
	for (int i = 0; i < 4; i++)
		cin >> people[i];

	int dat[10] = { 0 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			dat[win[i][j]]++;
	}

	for (int i = 0; i < 4; i++) {
		if (dat[people[i]] == 1)
			cout << people[i] << "번 합격" << endl;
		else
			cout << people[i] << "번 불합격" << endl;
	}

	return 0;
}