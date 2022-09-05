#include<iostream>
#include<vector>
using namespace std;

struct Node {
	int a;
};

vector<Node> v;

void addNode(int a) {
	Node nn = { a };
	v.push_back(nn);
}

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= 4; i++) {
		addNode(i * n);
	}

	for (int i = 0; i < 4; i++) {
		cout << v[i].a << ' ';
	}
}