#include<iostream>
#include<string>
using namespace std;

int n;
int cnt;
string sticker[100];
string path[4];
int used[15] = { 0 };

int isX() {
	string draft = "";
	for (int i = 0; i < 4; i++) 
		draft += path[i];
	if (draft == "CHRISTMAS")
		return 1;
	return 0;
}

void run(int lev) {
	if (lev == 4) {
		cnt += isX();
		return;
	}

	for (int i = 0; i < n; i++) {
		if (used[i] == 1) continue;
		used[i] = 1;
		path[lev] = sticker[i];
		run(lev + 1);
		path[lev] = "";
		used[i] = 0;
	}
}

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> sticker[i];
	}


	run(0);

	cout << cnt;
	return 0;
}