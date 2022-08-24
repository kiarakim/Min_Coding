#include<iostream>
#include<string>
using namespace std;
// make split function

void split(string result[], string str, string tar) {
	str += tar;
	
	int idx = 0;
	int a = 0;
	int b = 0;

	while (1) {
		b = str.find(tar, a);
		if (b == -1) break;
		result[idx++] = str.substr(a, b - a);
		a = b + 1;
	}
}

int main() {

	string str = "ID|EWR|DF|WE";
	string result[10];

	split(result, str, "|");
	
	return 0;
}