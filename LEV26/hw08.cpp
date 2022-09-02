#include<iostream>
using namespace std;

char path[5];
// 2branch, 3level
char ox[3] = "OX";

void printR(char path[]) {
	int isO = 0;
	int isX = 0;
	for (int i = 0; i < 3; i++) {
		if (path[i] == 'O')
			isO++;
		else isX++;
	}
	if (isX == 0) cout << isO << "½Â(";
	else if (isO == 0) cout << isX << "ÆÐ(";
	else
		cout << isO << "½Â" << isX << "ÆÐ(";

	for (int i = 0; i < 3; i++) {
		if (path[i] == 'O')
			cout << "½Â";
		else cout << "ÆÐ";
	}
	cout << ')' << endl;
	
}

void run(int lev) {
	if (lev == 3) {
		printR(path);
		return;
	}

	for (int i = 0; i < 2; i++) {
		path[lev] = ox[i];
		run(lev + 1);
	}
}

int main() {

	run(0);

	return 0;
}