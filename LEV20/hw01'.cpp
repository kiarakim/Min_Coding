#include<iostream>
using namespace std;

int x;

void BBQ() {
	if (x == 2)
		return;
	x++;
	BBQ();

}

int main() {

	BBQ();

	return 0;
}