#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> v;
int cnt;
char path[5];

int isSame(string pw) {
	for (int i = 0; i < 4; i++) {
		if (path[i] != pw[i]) return 0;
	}
	return 1;
}

void run(int lev, string pw) {
	if (lev == 4) {
		cnt++;
		if (isSame(pw)) {
			cout << cnt << "\n";
		}
		return;
	}

	for (int i = 0; i < 26; i++) {
		path[lev] = i + 'A';
		run(lev + 1, pw);
		path[lev] = 0;
	}
}

int main() {

	int n;
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (int i = 0; i < n; i++) {
		cnt = 0;
		run(0, v[i]);
	}

	return 0;
}