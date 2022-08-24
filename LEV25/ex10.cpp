#include<iostream>
#include<string>
using namespace std;
// 유효성 검사 : valid check
// 유효성 검사는 전부 함수로 뺀다.
// ex) 주어진 메일 주소 중, 규격에 맞는 주소는 몇 개인지 구하려 합니다. -> 유효성 검사 문제

int isValid(string str) {

	int len = str.length();
	
	// 2~5
	if (!(len >= 2 && len <= 5)) return 0;

	//특수 1개
	int cnt = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') continue;
		if (str[i] >= 'a' && str[i] <= 'z') continue;
		if (str[i] >= '0' && str[i] <= '9') continue;
		return 0;
	}

	// 대문자 거절
	for (int i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') return 0;
	}

	//축하
	return 1;
}

int main() {

	string str;
	cin >> str;

	if (isValid(str) == 1) cout << "VALID";
	else cout << "INVALID";

	return 0;
}