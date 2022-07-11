#include <iostream>
#include <cstring>
using namespace std;

// 카드 종류 알아내기 

int main() {
	char CardList[16];
	cin >> CardList;
	int len = strlen(CardList);
	int dat[26] = { 0 };

	for (int i = 0; i < len; i++) {
		dat[CardList[i] - 65]++;
	}

	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (dat[i])
			cnt++;
	}
	cout << cnt << "개";
	return 0;
}