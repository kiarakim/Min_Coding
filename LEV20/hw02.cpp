#include<iostream>
using namespace std;

void bbq(int n) {
	cout << n << " ";
	if (n == 0)
		return;
	bbq(n - 1);
	cout << n << " ";

}


int main() {

	int n;
	cin >> n;

	bbq(n);

	return 0;
}