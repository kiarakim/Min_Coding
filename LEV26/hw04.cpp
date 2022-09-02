#include<iostream>
using namespace std;

struct Node {
	int age;
	Node* next1;
	Node* next2;
};

int main() {

	Node* head;
	Node simson, woman1, woman2, man1, man2, man3;

	head = &simson;
	simson.age = 20;
	simson.next1 = &woman1;
	simson.next1 = &woman2;

	woman1.age = 29;
	woman1.next1 = &man1;
	woman1.next1 = &man2;

	woman2.age = 30;
	woman2.next1 = &woman1;
	woman2.next1 = &man3;

	man1.age = 25;
	man1.next1 = NULL;
	man1.next2 = NULL;
	
	man2.age = 40;
	man2.next1 = NULL;
	man2.next2 = NULL;
	
	man3.age = 38;
	man3.next1 = NULL;
	man3.next2 = NULL;

	return 0;
}