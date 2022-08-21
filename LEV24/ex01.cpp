#include<iostream>
#include<string>
using namespace std;
// parsing : 문자열 처리

// c언어, c++이 문자열 불편.
// 문자열을 char 배열에 넣어야함
// 비교가 안되어서 strcmp를 써야함. 

int main() {

	string id, pw;
	//cin >> id >> pw;

	id = "ABCD";

	cout << id.length(); // length()랑 size()는 같지만 전자를 쓰는 것을 추천


	/*if (id == "bts" && pw == "1234")
		cout << "아미고";
	else
		cout << "노노 비회원";*/

	return 0;
}