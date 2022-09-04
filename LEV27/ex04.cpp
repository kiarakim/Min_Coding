#include<iostream>
#include<vector>
using namespace std;

vector<int> arr;

void push(int n) {
	arr.push_back(n);
}

int top() {
	return arr[arr.size() - 1];
} 

void pop() {
	arr.pop_back();
}

int main() {

	push(3);
	push(4);
	push(5);
	cout << top();
	pop();
	cout << top();
	return 0;
}