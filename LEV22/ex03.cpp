#include<iostream>
using namespace std;

char path[10];

void dice(int lev) {
	if (lev == 3) {
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 6; i++) {
		path[lev] = '1' + i;
		dice(lev + 1);
		path[lev] = 0;
	}

}

int main() {

	dice(0);

	return 0;
}