#include<iostream>
using namespace std;

struct Node
{
	int x;
	Node* p;
};

int main() {

	Node* head;
	head = new Node; // new Node()��� �ϸ� ��� 0���� �ʱ�ȭ ��. �̷��� ���°� ����

	head->x = 3;
	head->p = new Node;
	head->p->x = 7;
	head->p->p = new Node;
	head->p->p->x = 9;
	head->p->p->p = NULL;

	return 0;
}