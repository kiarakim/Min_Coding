#include<iostream>
#include<vector>
using namespace std;

struct Node {
	char ch;
	Node* ptr;
};

Node* head;
Node* last;

void connect(int n) {
	if (head == NULL) {
		head = new Node();
		head->ch = n - 10 + 64;
		last = head;
	}
	else {
		last->ptr = new Node();
		last = last->ptr;
		last->ch = n - 10 + 64;
	}
}

int main() {

	int n;
	cin >> n;


	for (int i = 0; i < 4; i++) {
		connect(n + i);
	}

	for (Node* i = head; i != NULL; i = i->ptr)
		cout << i->ch;

	return 0;
}