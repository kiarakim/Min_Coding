#include<iostream>
#include<string>
using namespace std;

struct robot {
	int a;
	int b;
	string t;
};

int main() {

	robot robert;
	robot* p = &robert;

	cin >> robert.a >> robert.b >> robert.t;

	cout << p->a + p->b << ' ' << p->t;

	return 0;
}