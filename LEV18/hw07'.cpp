#include<iostream>
#include<cstring>
using namespace std;

// 민코딩 찾기
int main() {

	char vect[15] = "MINCODING";
	int len = strlen(vect);

	int dat[26] = { 0 };

	for (int i = 0; i < len; i++) 
		dat[vect[i] - 65] = 1;

	int n;
	cin >> n;

	char a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (dat[a - 65]) cout << 'O';
		else cout << 'X';
	}

	return 0;
}