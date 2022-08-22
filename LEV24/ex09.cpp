#include<iostream>
#include<string>
using namespace std;

int isGold(string str) {
	int cnt = 0;
	int a = -1;

	while (1) {
		a = str.find("GOLD", a + 1);
		if (a == -1) break;
		cnt++;
	}

	return cnt;
}
int main() {

	string gold[4] = { "GOLDABGOLD","GOLDTTTT","AGOLDGOLD","GOLDTTTT" };
	int sum = 0; 

	for (int i = 0; i < 4; i++) {
		sum += isGold(gold[i]);
	}

	cout << sum;

	return 0;
}