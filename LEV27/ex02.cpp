#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<string> arr = { "BTBTBTS","KFKFKFC","MBMBSBS"};

	for (int i = 0; i < 3; i++) {
		for (int j = arr[i].size() - 1; j >= 0; j--)
			cout << arr[i][j];
		cout << endl;
	}

	return 0;
}