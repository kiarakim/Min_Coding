#include<iostream>
#include<vector>
using namespace std;
// 이진트리 탐색

char vect[100] = { 0, 'A', 'B', 'T', 'R', 'S', 'V' };

void run(int now) {
	if (vect[now] == 0) return;

	cout << vect[now];
	run(now * 2);
	run(now * 2 + 1);
}

int main() {

	run(1);

	return 0;
}