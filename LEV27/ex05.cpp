#include<iostream>
#include<vector>
using namespace std;

struct Node {
	int n;
	char ch;
};

vector<Node> vecN;

void addNode(int n, char ch) {
	Node a = { n,ch };
	vecN.push_back(a);
}

void printNode() {
	for (int i = vecN.size() - 1; i >= 0; i--) {
		cout << vecN[i].ch << ' ' << vecN[i].n << ' ';
	}
}

int main() {

	addNode(3, 'A');
	addNode(4, 'B');
	addNode(5, 'Q');
	addNode(1, 'Z');

	printNode();

	return 0;
}