#include<iostream>
#include<vector>
#include<string>
using namespace std;

//vector<vector<int>> v(4);
int v[4][4] = {
	0,1,0,1,
	0,0,1,0,
	0,0,0,1,
	0,0,1,0
};

int used[4];

//void run(int now) {
//
//	cout << now << ' ';
//
//	for (int i = 0; i < v[now].size(); i++) {
//		int next = v[now][i];
//
//		if (used[next] == 1) continue;
//		used[next] = 1;
//
//		run(next);
//	}
//}

void run2(int now) {

	cout << now << ' ';

	for (int i = 0; i < 4; i++) {
		if (v[now][i] == 0) continue;

		if (used[i] == 1) continue;
		used[i] = 1;

		run2(i);
	}
}

int main() {

	//v[0] = { 1,3 };
	//v[1] = { 2 };
	//v[2] = { 0,3 };
	//v[3] = { 2 };

	used[0] = 1;
	//run(0);
	run2(0);
	return 0;
}