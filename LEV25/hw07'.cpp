#include<iostream>
#include<string>
using namespace std;

string vowel = "aeiou";

int step12(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] < 'a' || str[i] > 'z') return 0;
	}
	return 1;
}
int step3(string str) {
	int dat[26] = { 0 };
	for (int i = 0; i < str.length(); i++) 
		dat[str[i] - 'a']++;

	for (int i = 0; i < 26; i++) 
		if (dat[i] > 2) return 0;
	return 1;
}
int step4(string str) {
	int datV[5] = { 0 };
	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j < 5; j++) {
			if (str[i] == vowel[j]) {
				datV[j]++;
				break;
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		cnt += datV[i];
	}

	if (cnt == 3) return 1;
	return 0;
}

int isGood(string str) {


	if (step12(str) == 0) return 0; // 소문자만 사용할 것. 특수문자 자동 거름
	if (step3(str) == 0) return 0; // 알파벳 2개 이하로만 사용
	if (step4(str) == 0) return 0; // 모음 알파벳은 3개만.

	return 1;
}

int main() {

	int n;
	cin >> n;
	string name[10];

	for (int i = 0; i < n; i++)
		cin >> name[i];

	for (int i = 0; i < n; i++) {
		if (isGood(name[i])) cout << "good" << "\n";
		else cout << "no" << "\n";
	}

	return 0;
}