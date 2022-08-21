#include<iostream>
#include<string>
using namespace std;
// 역순 출력

// c++ struct부터는 함수 넣을 수 있음.
int main() {

	string str = "BTSKFCKDIVRWKFCWSKDFA";

	//int ret = str.find("KFC"); // KFC가 몇번 인덱스부터 있는지.
	int ret = str.find("KFC", 5); // 5번 인덱스부터 찾아라

	cout << ret;

	return 0;
}