#include<iostream>
#include<vector>
#include<string>
using namespace std;

string Command;
vector<int> Number;

void getMin(char ch) {
	int min = 10;
	int idx = 0;
	for (int i = 0; i < Number.size(); i++) {
		if (min > Number[i]) {
			min = Number[i];
			idx = i;
		}
	}
	cout << min;
	Number.erase(Number.begin() + idx);
}

void getMax(char ch) {
	int max = -1;
	int idx = 0;
	for (int i = 0; i < Number.size(); i++) {
		if (max < Number[i]) {
			max = Number[i];
			idx = i;
		}
	}
	cout << max;
	Number.erase(Number.begin() + idx);
}

int main() {

	for (int i = 0; i < 6; i++) {
		int n;
		cin >> n;
		Number.push_back(n);
	}

	cin >> Command;

	for (int i = 0; i < 6; i++) {
		if (Command[i] == 'm') getMin(Command[i]);
		if (Command[i] == 'x') getMax(Command[i]);
	}
	

	return 0;
}