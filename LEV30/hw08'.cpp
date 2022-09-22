#include<iostream>
#include<vector>
using namespace std;

vector<char> v{'B','I','A','H'};
int n;

int main() {

	cin >> n;
	int temp = n;

	while (v.size() > 0) {
		int len = v.size();
		int nn = temp % len - 1;
		if (nn == -1) {
			cout << v[len - 1] << ' ';
			temp = n;
			nn = len - 1;
		}
		else cout << v[nn] << ' ';
		v.erase(v.begin() + nn);
		temp += nn;
	}

	return 0;
}