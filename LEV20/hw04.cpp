#include<iostream>
using namespace std;

int x;

void abc(int a) {
	
	if (a > x + 6)
		return;
	abc(a + 2);
	cout << a << " ";
}


int main() {

	int a;
	cin >> a;
	x = a;
	abc(a);

	return 0;
}