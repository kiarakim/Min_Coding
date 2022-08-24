#include<iostream>
#include<string>
using namespace std;

string A, B;

int getCnt(string from, string to) {
	int a = -1;
	int cnt = 0;

	while (1) {
		a = from.find(to, a + 1);
		if (a == -1) break;
		cnt++;
	}
	return cnt;
}

int main() {
	cin >> A >> B;
	int cnt = 0;

	if (A.length() > B.length()) {
		cnt = getCnt(A, B);
	}
	else
		cnt = getCnt(B, A);

	cout << cnt;

	return 0;
}