#include<iostream>
using namespace std;

struct Node
{
	int x;
	Node* p;
};

int main() {

	Node a, b, c;
	Node* head;
	
	head = &a;
	head->x = 3;
	head->p = &b;
	head->p->x = 4;
	head->p->p = &c;
	head->p->p->x = 5;
	head->p->p->p = NULL;

	return 0;
}