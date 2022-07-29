#include<iostream>
#include<cstring>
using namespace std;

char str[10];

void run(int lev) {
	cout << lev << " ";
	if (lev == 1)
		return;
	run(lev - 1);
	cout << lev << " ";
}

int main() {

	cin >> str;
	int len = strlen(str);
	run(len);

	return 0;
}