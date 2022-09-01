#include<iostream>
using namespace std;

struct Node
{
	int x;
	Node* p;
};

Node* head;
Node* last;

void addNode(int n) {
	if (head == NULL) {
		head = new Node();
		head->x = n;
		head->p = NULL;
		last = head;
	}
	else {
		last->p = new Node();
		last = last->p;
		last->x = n;
	}
}

int main() {


	addNode(1);
	addNode(2);
	addNode(3);
	addNode(4);
	addNode(5);

	for (Node* i = head; i != NULL; i = i->p){
		cout << i->x << ' ';
	}


	return 0;
}