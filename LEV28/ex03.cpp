#include<iostream>
#include<vector>
using namespace std;
//인접리스트
vector<vector<int>> v(5);

char name[] = "DUSRK";

int main() {

	v[0] = { 1,3,4 };
	v[1] = { 2,3 };
	v[3] = { 2,4 };
	v[4] = { 1,3 };

	/*char ch;
	cin >> ch;
	int n = ch - 'A';*/

	int n;
	cin >> n;

	for (int i = 0; i < v[n].size(); i++) {
		cout << name[v[n][i]] << ' ';
	}

	return 0;
}