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

	d++; //dummy code �������� �ڵ�
}


int main() {

	abc();

	return 0;
}

//01#22