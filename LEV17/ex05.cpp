#include <iostream>
using namespace std;

void abc();
void cdd();
void kfc();
void bts();

// 1. Break Point �Ἥ ��� Ȯ��
// 2. F10�� F11�� �Ἥ ��� Ȯ��

int main() {
	abc();
	cdd();
}

void abc() {
	kfc();
	cdd();
 	cout << "abc" << endl;
}

void cdd() {
	bts();
	cout << "cdd" << endl;
}

void kfc() {
	cdd();
	bts();
}

void bts() {
	cout << "Hi" << endl;
}