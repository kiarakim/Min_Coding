#include<iostream>
#include<string>
using namespace std;

string str = "ABCDATRBBKFCKFCKFC";
string tar[3] = { "KFC" ,"BC","KF" };

int getCnt(string arr) {
	int a = -1;
	int cnt = 0;
	while (1) {
		a = str.find(arr, a + 1);
		if (a == -1) break;
		cnt++;
	}
	return cnt;
}

int main() {

	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		cnt = getCnt(tar[i]);
		cout << cnt << "\n";
	}

	return 0;
}