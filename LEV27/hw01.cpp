#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> v;

void push(int n) {
	v.push_back(n);
}

void printLast() {
	cout << v[v.size() - 1] << endl;
}

void pop() {
	v.pop_back();
}

int main() {

	int n;
	cin >> n;
	string str;
	int elem;


	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			cin >> elem;
			push(elem);
		}
		else if (str == "printLast")
			printLast();
		else if (str == "pop")
			pop();
	}

	return 0;
}