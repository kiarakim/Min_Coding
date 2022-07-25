#include<iostream>
using namespace std;

int x = 0;
int d = 1;
void abc() {
	if (x == 2) {
		cout << "#";
		return;

	}
	cout << x;
	x++;
	abc();
	cout << x;

	d++; //dummy code 쓸데없는 코드
}


int main() {

	abc();

	return 0;
}

//01#22