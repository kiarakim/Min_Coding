#include<iostream>
#include<string>
using namespace std;

int main() {

	string str = "A[12]FDF[SDFSDFG]AASDFSGF[SDF][WERE]";
	int a = 0;
	int b = 0;

	while (1) {
		a = str.find('[', a);
		if (a == -1) break;
		a++;
		b = str.find(']', a);
		cout << str.substr(a, b - a) << "\n";
		a = b + 1;
	}

	return 0;
}