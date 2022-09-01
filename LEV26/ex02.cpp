#include<iostream>
using namespace std;

struct strD {
	int a;
	char ch1;
	char ch2;
};

int main() {

	strD t1 = { 3, 'A', 'Q' };
	strD t2 = { 9, 'T', 'K'};

	strD t3 = t2; // 하나하나가 복사가 된다.

	return 0;
}