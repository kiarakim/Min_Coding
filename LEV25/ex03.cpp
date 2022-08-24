#include<iostream>
#include<string>
using namespace std;


int main() {

	string str = "AB#BTTR#KKKK";

	int a = 0;
	int sidx = 0;
	int eidx = 0;
	
	/*for (int i = 0; i < str.length(); i++) {
		if (str[i] == '#') {
			cout << "\n";
			continue;
		}
		cout << str[i];
	}*/

	while (1) {
		a = str.find('#', sidx);
		if (a == -1) {
			cout << str.substr(sidx);
			break;
		}
		eidx = a;
		cout << str.substr(sidx, eidx - sidx) << "\n";
		sidx = a + 1;
	}

	return 0;
}