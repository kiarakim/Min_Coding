#include<iostream>
using namespace std;

struct KFC
{
	int a;
	int* p;
	char* g;
};

int main() {

	KFC da;
	int t = 3;
	char ch = 'A';

	da.a = 15;
	da.p = &t;
	da.g = &ch;

	cout << da.a << ' ' << *da.p << ' ' << *da.g;

	return 0;
}