#include<iostream>
using namespace std;

int v[3][4] = {
	4,5,1,9,
	9,5,3,3,
	4,4,5,6
};

int path[3];
int sum = 0;

void print(int lev) {
	int sum = 0;
	for (int i = 0; i < lev; i++) {
		sum += path[i];
		cout << path[i] << " ";
	}
	cout << " = " << sum << endl;
}

void run(int lev) {

	if (lev == 3) {
		print(lev);
		return;
	}

	sum = 0;
	for (int i = 0; i < 4; i++) {
		path[lev] = v[lev][i];
		run(lev + 1);
		path[lev] = v[lev][i];
	}

}

int main() {

	run(0);

	return 0;
}
//------------------------------   "1H32M" ------------------------------