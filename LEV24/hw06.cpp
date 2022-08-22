#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string str;

int getCnt(string code) {
	int a = -1;
	int cnt = 0;

	while (1) {
		a = str.find(code, a + 1);
		if (a == -1) break;
		cnt++;
	}
	return cnt;
}

int main() {
	
	cin >> str;

	for (int i = 0; i < str.length(); i++) 
		str[i] = toupper(str[i]);

	int pass = getCnt("PASS");
	int fail = getCnt("FAIL");
	int res = pass * 100 / (pass + fail);

	cout << res << '%';

	return 0;
}