#include<iostream>
using namespace std;

// 기차에서 우리팀 찾기
int train[] = { 3, 7, 6, 4, 2, 9, 1, 7 };
int team[3];
int isPattern(int index);

int main() {

	cin >> team[0] >> team[1] >> team[2];
	int seat = 0;
	for (int i = 0; i < 6; i++) {
		seat = isPattern(i);
		if (seat == 1) {
			seat = i;
			break;
		}
	}
	cout << seat << "번~" << seat + 2 << "번 칸";

	return 0;
}

int isPattern(int index) {
	for (int i = 0; i < 3; i++) {
		if (team[i] != train[i + index])return 0;
	}
	return 1;	
}