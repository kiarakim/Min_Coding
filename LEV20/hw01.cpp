#include<iostream>
using namespace std;

void bbq(int x) {
	if (x == 5)
		return;
	bbq(x + 1);
}


int main() {

	bbq(1);

	return 0;
}