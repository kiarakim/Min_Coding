#include<iostream>
using namespace std;

struct Node
{
	int x;
	Node* p;
};

int main() {

	Node* head;
	head = new Node; // new Node()라고 하면 모두 0으로 초기화 됨. 이렇게 쓰는것 권장

	head->x = 3;
	head->p = new Node;
	head->p->x = 7;
	head->p->p = new Node;
	head->p->p->x = 9;
	head->p->p->p = NULL;

	return 0;
}