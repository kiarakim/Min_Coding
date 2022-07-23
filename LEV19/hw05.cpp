#include<iostream>
#include<cstring>
using namespace std;

int main() {
	struct MC
	{
		char burger1[8];
		char burger2[8];
	};

	MC bob, tom;

	cin >> bob.burger1 >> bob.burger2;
	cin >> tom.burger1 >> tom.burger2;

	cout << "bob.burger1=" << strlen(bob.burger1) << endl;
	cout << "bob.burger2=" << strlen(bob.burger2) << endl;
	cout << "tom.burger1=" << strlen(tom.burger1) << endl;
	cout << "tom.burger2=" << strlen(tom.burger2) << endl;

	return 0;
}