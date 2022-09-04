#include<iostream>
#include<vector>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	vector<string> arr(n);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	string maxStr;
	

	for (int i = 0; i < n; i++) {
		if (maxStr.length() < arr[i].length()) {
			maxStr = arr[i];
		}
	}
	cout << maxStr;

	return 0;
}