#include<iostream>
using namespace std;

int v[6];

void bbq(int n) {
	cout << v[n] << " ";
	if (n == 5)
		return;
	bbq(n + 1);
	cout << v[n] << " ";

}


int main() {

	for (int i = 0; i < 6; i++)
		cin >> v[i];

	bbq(0);

	return 0;
}