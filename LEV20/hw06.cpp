#include<iostream>
using namespace std;

int a, b;

void abc(int s) {
	cout << s << ' ';
	if (s == b) {
		return;
	}
	abc(s + 1);
	cout << s << ' ';
}

int main() {

	cin >> a >> b;
	abc(a);

	return 0;
}