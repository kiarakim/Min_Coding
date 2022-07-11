#include<iostream>
using namespace std;

// 인기 많은 알파벳 
int main() {
	
	char S[9];
	cin >> S;

	int dat[26] = { 0 };
	
	for (int i = 0; i < 8; i++) {
		dat[S[i] - 65]++;
	}

	int max = 0;
	int maxIndex = 0;

	for (int i = 0; i < 26; i++) {
		if (dat[i] > max) {
			max = dat[i];
			maxIndex = i;
		}
	}
	cout << (char)(maxIndex + 65);

	return 0;
}