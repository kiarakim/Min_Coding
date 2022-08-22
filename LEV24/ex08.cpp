#include<iostream>
#include<string>
using namespace std;


int main() {

	string str = "ABCAAABCAAABCDDA";
	int a = -1;
	int cnt = 0;

	while (1){
		a = str.find("ABC", a + 1);

		if (a == -1) break;
		
		cnt++;
	}
	cout << cnt;

	return 0;
}