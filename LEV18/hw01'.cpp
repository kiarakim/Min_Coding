#include<iostream>
using namespace std;

// 가족을 찾아라
int main() {

	char map[2][3] = {
		'G','K','G',

	};

	for (int i = 0; i < 3; i++) 
		cin >> map[1][i];

	int dat[26] = { 0 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			dat[map[i][j] - 65]++;
		}
	}

	int flag = 0;
	for (int i = 0; i < 26; i++) {
		if (dat[i] >= 3) {
			flag = 1;
			break; // 선생님 코드 보고 추가함
		}
	}
	
	if (flag == 1)cout << "있음";
	else cout << "없음";


	return 0;
}