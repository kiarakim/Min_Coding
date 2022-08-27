#include<iostream>
#include<string>
using namespace std;

string str;
string add[4] = { ".com", ".co.kr",".org", ".net" };

int getHttpIdx(int &start, int end) {
	string temp = str.substr(start, end - start);
	
	if (temp.find("http", 0) != -1) { // 뭔갈 찾았으면
		int b = str.find("http", start);	// 비교는 http뒤에 있는 걸 기준으로 할 것
		if (str[b + 4] == 's') {	// 뒤에 s가 있으면
			start = b + 8;
			return b;
		}
		else {
			start = b + 7;
			return b;
		}
	}
	return -1;
}

int checkStr(int start, int &end) {
	end = str.find('.', start); // 점을 찾고
	int tempStart = start;
	if (getHttpIdx(tempStart, end) == -1) { // start와 end 사이에 http없으면
		if (str.substr(tempStart, end - tempStart).length() < 3) // 비교해서 3보다 적으면
			return 0; // 땡
		return 1; // 3보다 많으면 ㅇㅋ
	}
	return 0; // 땡. 그 사이에 http 있음
}

int getAddIdx(int start) { // .com있냐?
	string temp = str.substr(start, 6);
	for (int i = 0; i < 4; i++) {
		if (temp.find(add[i]) == 0)
			return 1; //있다
	}
	return 0; //없다
}
int main() {
	cin >> str;

	// 소문자로 바꾸기
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}

	int a = 0;
	int b = 0;
	int cnt = 0;

	while (1) {
		b = getHttpIdx(a, str.length()); // http 시작점 찾기
		if (b == -1) break; // 주소 못찾으면 break

		if (checkStr(a, b) == 1) { // .찾고 앞의 단어 3개 이상이면
			if (getAddIdx(b) == 1) {// .com 있냐? 있으면
				cnt++;
				a = b;
			}
		}
		a++;
	}
	
	cout << cnt << "개";

	return 0;
}