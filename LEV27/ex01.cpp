#include<iostream>
#include<vector>
using namespace std;

// 버그나면 F5 -> 무시 -> 호출스택
int main() {
	
	int a = 10;
	char ch = 'C';
	//cin >> a >> ch;
	vector<char> arr(a + 1);

	int t = a;
	char ct = ch;

	for (int i = 0; i < 5; i++)
		arr[a - i] = ct++;

	for (int i = 0; i < 4; i++)
		arr.push_back(++ch);
	
	return 0;
}