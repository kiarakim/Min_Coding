#include<iostream>
#include<string>
using namespace std;


int main() {

	//string a = "2343";
	//int bi = 2345;

	//int ai = stoi(a); // 문자열을 정수로
	//string b = to_string(bi); // 정수를 문자열로

	string str = "B[45]AB[9994]";
	
	int a = str.find('[') + 1;
	int b = str.find(']', a);

	int c = str.find('[',b) + 1;
	int d = str.find(']', c);

	int i1 = stoi(str.substr(a, b - a));
	int i2 = stoi(str.substr(c, d - c));

	cout << i1 + i2;

	return 0;
}