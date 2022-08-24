#include<iostream>
#include<string>
using namespace std;
// make replace function with erase & insert

int main() {

	string str = "ABKFC___KFC";
	
	int a = -1;
	while (1) {
		a = str.find("KFC", a + 1);
		if (a == -1) break;
		str.erase(a, 3);
		str.insert(a, "***");
	}

	cout << str;

	return 0;
}