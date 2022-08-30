#include <iostream>
#include <string>
using namespace std;

string http[100];
int t;

string makeSmallLetter(string str) {
	//대문자를 소문자로 모두 변환
	string temp;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			temp += (str[i] - 'A' + 'a');
		}
		else temp += str[i];
	}
	return temp;
}

void splitHttp(string str) {
	int a = 0; 
	int b = 0;
	int old = 0; 
	int sel;
	while (1) {
		a = str.find("http://", old + 1); 
		b = str.find("https://", old + 1);

		if (a == -1 && b == -1) { 
			http[t++] = str.substr(old);
			break;
		}

		else if (a == string::npos && b != string::npos) sel = b;
		else if (a != string::npos && b == string::npos) sel = a;
		else if (a <= b) sel = a;
		else sel = b;

		http[t++] = str.substr(old, sel - old);
		old = sel;
	}
}

int possibleCheck(string str) {
	int a = str.find("http://");
	int b = str.find("https://");
	string front;
	if (a == -1 && b == -1) return 0;
	if (a == 0) front = "http://";
	if (b == 0) front = "https://";

	a = str.find(".");
	if (a == -1) return 0;

	int i;
	for (i = str.length() - 1; i >= 0; i--) {
		if (str[i] == '.') break;
	}

	//라스트 글자 확인
	string end = str.substr(i);
	if (!(end == ".com" || end == ".net" || end == ".kr" || end == ".org")) return 0;
	if (end == ".kr") {
		end = str.substr(i - 3);
		if (end != ".co.kr") return 0;
	}

	int sum = front.length() + end.length();
	int strn = str.length();

	//세 글자 이상인지 확인
	if (sum + 3 > strn) return 0;
	return 1;
}

int main()
{
	string str;

	cin >> str;

	str = makeSmallLetter(str); // 소문자로 바꾸고
	splitHttp(str);

	int cnt = 0;
	for (int i = 0; i < t; i++) {
		cnt += possibleCheck(http[i]);

	}
	cout << cnt << "개";

	return 0;
}