#include<iostream>
#include<vector>
#include<string>
using namespace std;

char path[3];
string name;
int n, len;

void run(int lev) {
	if (lev == n) {
		cout << path << "\n";
		return;
	}

	for (int i = 0; i < len; i++) {
		path[lev] = name[i];
		run(lev + 1);
	}
}

int main() {

	cin >> name;
	cin >> n;

	len = name.length();

	run(0);

	return 0;
}