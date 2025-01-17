#include<iostream>
using namespace std;

char craft[4][4];
//char craft[4][4] = {"A_C","_K_","T__","___"};
//char craft[4][4] = {"BCD","QWE","___","IOP"};

void fall(int n) {
	for (int i = 3; i >= 0; i--) {
		int cnt = 0;
		int idx = -1;
		for (int j = i; j >= 0; j--) {
			if (craft[j][n] == '_') {
				cnt++;
			}
			else {
				idx = j;
				break;
			}
		}
		if (idx != -1 && craft[idx+cnt][n] != craft[idx][n]) {
			craft[idx + cnt][n] = craft[idx][n];
			craft[idx][n] = '_';
		}
	}
}

int main() {
	for (int i = 0; i < 4; i++)
		cin >> craft[i];
	
	for (int i = 0; i < 3; i++) {
		fall(i);
	}

	for (int i = 0; i < 4; i++) {
		cout << craft[i] << endl;
	}

	return 0;
}