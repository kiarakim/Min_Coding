#include<iostream>
#include<string>
using namespace std;

int main() {

	// 파싱하는 이유 : 
	// 1. 코테이서 많이 출제되기 때문
	// 2. 현업에서 많이 사용되기 때문
	// 3. 디버깅 훈련

	string str = "BT[42693742]HH";

	int a = str.find('[');
	a++;
	int b = str.find(']', a);
	cout << str.substr(a, b - a);

	return 0;
}