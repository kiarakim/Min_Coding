#include<iostream>
using namespace std;

int v[8] = { 3,5,4,2,6,1,9,0 };

void abc(int lev, int sum) {
	
	if (lev == 7) {
		cout << "È£¿ì\n";
		return;
	}
	abc(lev + 1, sum + v[lev + 1]);
	cout << sum << " ";

}


int main() {

	abc(0, v[0]);

	return 0;
}
