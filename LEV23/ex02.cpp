#include<iostream>
using namespace std;

char path[10];
void run(int lev, int sum) {

	//if (lev > 0 && (path[lev - 1] == '2' || path[lev - 1] == '4')) return;

	//if (sum > 10) return;
	if (path[1] == '2') return;
	if (lev == 3) {
		cout << path << endl;
		return;
	}

	for (int i = 1; i <= 6; i++) {
		//if (i == 2 || i == 4) continue; // 아예 안들어감
		path[lev] = '0' + i;
		//if (path[1] == '2') continue;
		//if ((sum + i) > 10) continue;
		run(lev + 1, sum + i);
	}
}

int main() {

	run(0, 0);

	return 0;
}