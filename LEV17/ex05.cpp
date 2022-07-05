#include <iostream>
using namespace std;

void abc();
void cdd();
void kfc();
void bts();

// 1. Break Point 써서 경로 확인
// 2. F10과 F11을 써서 경로 확인

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