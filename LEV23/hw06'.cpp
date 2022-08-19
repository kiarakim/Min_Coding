#include<iostream>
using namespace std;
// 황금좌표 찾기

char mA[4][5];
char mB[4][5] = {
	"ABCD",
	"BBAB",
	"CBAC",
	"BAAA"
};

int dat[26] = { 0 };

int main() {

	for (int i = 0; i < 4; i++) 
		cin >> mA[i];
	
	char ch;

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (mA[y][x] == mB[y][x]) {
				ch = mB[y][x];
				dat[ch - 'A']++;
			}
		}
	}

	int max = -1;
	int idx;
	for (int i = 0; i < 26; i++) {
		if (max < dat[i]) {
			max = dat[i];
			idx = i;
		}
	}

	cout << (char)(idx + 65);

	return 0;
}