#include<iostream>
using namespace std;

struct Node
{
	char x;
	Node* p;
};

int main() {

	Node a, b, c;
	
	Node* t = &a;
	
	//t->p = &a;
	a.p = &b;
	b.p = &c;
	c.p = NULL;

	a.x = '3';
	b.x = '9';
	c.x = 'z';


	return 0;
}