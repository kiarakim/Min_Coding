#include<iostream>
#include<vector>
using namespace std;

struct Node {
	char a, b;
};


int main() {

	int n;
	cin >> n;
	char ch1, ch2;

	vector<Node> vec;

	for (int i = 0; i < n; i++) {
		cin >> ch1 >> ch2;
		vec.push_back({ ch1,ch2 });
	}

	swap(vec[0], vec[n - 1]);

	for (int i = 0; i < n; i++) {
		cout << vec[i].a << vec[i].b << ' ';
	}

	return 0;
}