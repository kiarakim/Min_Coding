#include<iostream>
using namespace std;

struct KFC
{
	int a;
	char ch1;
	char ch2;
};

int main() {

	KFC s = { 3, 'Q' , 'H'};

	KFC* t = &s;
	KFC* q = &s;

	cout << t->a + q->a;

	return 0;
}