#include<iostream>
#include<string>
using namespace std;

string a;
int M = 0, MIdx = 0;
int m = 99, mIdx = 0;

int main() {

	for (int i = 0; i < 4; i++) {

		cin >> a;

		if (M < a.length()) {
			M = a.length();
			MIdx = i;
		}
		if (m > a.length()) {
			m = a.length();
			mIdx = i;
		}
	}
	
	cout << "�乮��:" << MIdx << endl;
	cout << "ª������:" << mIdx << endl;

	return 0;
}