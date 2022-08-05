#include<iostream>
using namespace std;

int v[3][4] = {
	4,5,1,9,
	9,5,3,3,
	4,4,5,6
};

int path[3];

void print(int lev, int sum) {
	for (int i = 0; i < lev; i++) {
		cout << path[i] << " ";
	}
	cout << "= " << sum << endl;
}

void run(int lev, int sum) {

	if (lev == 3) {
		print(lev, sum);
		return;
	}

	for (int i = 0; i < 4; i++) {
		path[lev] = v[lev][i];
		run(lev + 1, sum + v[lev][i]); // +=하면 sum값이 바뀜
	}

}

int main() {

	run(0, 0);

	return 0;
}