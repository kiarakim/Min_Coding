#include<iostream>
using namespace std;

int v[4][3] = {
	1,3,-5,
	-7,3,4,
	-2,-5,-9,
	5,5,4
};
int maxM = -999999;

void run(int lev, int mul) {

	if (lev == 4) {
		if (mul > maxM)
			maxM = mul;
		return;
	}

	for (int i = 0; i < 3; i++) {
		run(lev + 1, mul * v[lev][i]); 
	}

}

int main() {

	run(0, 1);
	cout << "max --->" << maxM;
	return 0;
}