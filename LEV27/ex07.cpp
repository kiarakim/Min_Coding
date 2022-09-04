#include<iostream>
#include<vector>
using namespace std;


int main() {
	
	int c, n;
	cin >> c >> n;
	int a, b;

	vector<vector<int>> arr(c);

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		arr[a].push_back(b);
	}

	for (int i = 0; i < c; i++) {
		for (int j = 0; j < arr[i].size(); j++)
			cout << arr[i][j] << ' ';
		cout << endl;
	}
	

	return 0;
}