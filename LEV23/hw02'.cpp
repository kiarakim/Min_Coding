#include<iostream>
using namespace std;
// 암살자 존휙

int tar[3][2];
char field[3][4] = { 0 };

int isDanger(int y, int x) {
	for (int i = 0; i < 4; i++) {
		if (i == x) continue;
		if (field[y][i] == '#')
			return 1;//위험
	}
	
	for (int i = 0; i < 3; i++) {
		if (i == y) continue;
		if (field[i][x] == '#')
			return 1;//위험
	}

	return 0;
}

int main() {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++)
			cin >> tar[i][j];
	}

	for (int i = 0; i < 3; i++) {
		field[tar[i][0]][tar[i][1]] = '#';
	}

	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (isDanger(tar[i][0], tar[i][1]))
			flag = 1;
	}

	if (flag == 1) cout << "위험";
	else cout << "안전";

	return 0;
}

/*
#include <iostream>
using namespace std;

int main()
{
	int bucketY[10] = { 0 };
	int bucketX[10] = { 0 };
	int flag = 0;

	//X, Y좌표중 같은 값이 입력되면 위험
	for (int i = 0; i < 3; i++)
	{
		int a, b;
		cin >> a >> b;

		bucketY[a]++;
		bucketX[b]++;
		if (bucketY[a] == 2) flag = 1;
		if (bucketX[b] == 2) flag = 1;
	}

	if (flag == 1) cout << "위험";
	else cout << "안전";

	return 0;
}
*/