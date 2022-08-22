#include<iostream>
#include<string>
using namespace std;

int main() {

	// 파싱을 위한 준비 1 : find
	// 파싱을 위한 준비 2 : substr

	//string str = "ABCWERW";
	//string ret = str.substr(2, 4); // 2번 'index'부터 4'글자'를 뽑아냄

	// -------------------------------------------------------------

	// A~Z까지 문자열 하나 만든다.
	string str;
	for (char i = 'A'; i <= 'Z'; i++) {
		str += i;
	}
	// 수 2개 입력. a,b
	// a index~ b index까지 출력(substr 사용)
	int a, b;
	cin >> a >> b;

	cout << str.substr(a, b - a + 1);
		
	return 0;
}