#include<iostream>
#include<queue>
using namespace std;

int main() {

	queue<int> q;

	q.push(5);
	q.push(4);
	q.push(3);



	for (int i = 0; i < 5; i++) {
		int n = q.front();
		q.pop();
		n = (n * 55 + 17) % 11;
		q.push(n);
	}

	while (!q.empty()) {
		cout << q.front() << "\n";
		q.pop();
	}



	return 0;
}