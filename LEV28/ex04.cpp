#include<iostream>
#include<vector>
using namespace std;

char name[] = "ABTQVX";

//// ���� ���
//int map[6][6] = {
//	0,1,1,1,0,0,
//	0,0,0,0,1,1,
//	0,0,0,0,0,0,
//	0,0,0,0,0,0,
//	0,0,0,0,0,0,
//	0,0,0,0,0,0
//};
//
//// Ž��
//void run(int now) {
//	cout << now;
//
//	for (int i = 0; i < 6; i++) {
//		if (map[now][i] == 0) continue;
//		run(i);
//	}
//}

vector<vector<char>> v(6);

void run2(int now) {
	cout << name[now];

	for (int i = 0; i < v[now].size(); i++) {
		int next = v[now][i];
		run2(next);
	}
}
int main() {


	/*int n;
	cin >> n;*/

	/*for (int i = 0; i < 6; i++) {
		if (map[n][i])
			cout << name[i] << ' ';
	}*/

	// Ž��
	//run(0);


	// ���� ����Ʈ
	v[0] = { 1,2,3 };
	v[1] = { 4,5 };

	run2(0);


	return 0;
}