#include<iostream>
#include<string>
using namespace std;

int main() {

	/*string a = "ABC";
	string b = "WERT";
	string c;*/

	//c = "ABC" + "DEF" + "GHI"; // 이건 안됨. 오버로딩 어쩌구 때문에. 꼭 하려면 따로따로 해야함.

	// string 클래스 + 문자열 (O)
	// 문자열 + 문자열 (X)

	//c = b + "ABC"; //이건 가능

	string str[4] = { "ABBT","BTBT&","BBBT","KFC" };

	for (int i = 0; i < 4; i++) {
		for (int j = str[i].length()-1; j >= 0; j--) {
			cout << str[i][j];
		}
		cout << "\n";
	}


	return 0;
}