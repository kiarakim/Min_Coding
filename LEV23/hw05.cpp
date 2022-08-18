#include<iostream>
using namespace std;
// 미안하다 친구야

char path[10];
char name[6] = "EWABC";
int dat[26] = { 0 };
char a;

void run(int lev) {
	if (lev == 4) {
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 5; i++) {
		if (name[i] == a) continue;
		if (dat[name[i] - 'A'] == 1) continue;
		dat[name[i] - 'A'] = 1;
		
		path[lev] = name[i];
		run(lev + 1);
		dat[name[i] - 'A'] = 0;

	}
}

int main() {
	cin >> a;
	run(0);
}