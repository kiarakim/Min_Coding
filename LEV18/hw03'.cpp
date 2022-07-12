#include<iostream>
#include<cstring>
using namespace std;

// 알파벳 카운팅
int main() {
	char a[11];
	cin >> a;
	int len = strlen(a);
	
	int dat[26] = { 0 };

	for (int i = 0; i < len; i++)
		dat[a[i] - 65]++;

	int max = 0;
	int maxIdx = 0;

	for (int i = 0; i < 26; i++) {
		if (dat[i] > max) {
			max = dat[i];
			maxIdx = i;
		}
	}
	cout << (char)(maxIdx + 65);

	return 0;
}