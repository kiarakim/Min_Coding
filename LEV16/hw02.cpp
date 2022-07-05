#include <iostream>
using namespace std;

//내가 좋아하는 문자의 수
int main() {
	char v[4][5] = {
		"ABKT", 
		"KFCF", 
		"BBQQ", 
		"TPZF"
	};
	char ch1, ch2;
	cin >> ch1 >> ch2;
	int cnt = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (v[i][j] == ch1 || v[i][j] == ch2) {
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}