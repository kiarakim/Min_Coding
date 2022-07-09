#include <iostream>
using namespace std;

// 도와주세요 다이어트 
int main() {
	int levelTable[4][2] = { 10,20,30,60,100,150,200,300 };
	int fruit[6];
	for (int i = 0; i < 6; i++)
		cin >> fruit[i];
	int cnt[4] = { 0 };

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			if (fruit[i] >= levelTable[j][0] && fruit[i] <= levelTable[j][1])
				cnt[j]++;
		}
	}

	for (int i = 0; i < 4; i++) {
		cout << "lev" << i << ":" << cnt[i] << endl;
	}

	return 0;
}