#include<iostream>
#include<cstring>
using namespace std;

int main() {

	char sent[3][11];
	for (int i = 0; i < 3; i++)
		cin >> sent[i];
	int max = 0;
	int idx = 0;

	for (int i = 0; i < 3; i++) {
		if (max < strlen(sent[i])) {
			max = strlen(sent[i]);
			idx = i;
		}
	}

	char temp[11];
	strcpy(temp, sent[0]);
	strcpy(sent[0], sent[idx]);
	strcpy(sent[idx], temp);

	for (int i = 0; i < 3; i++) {
		cout << sent[i] << endl;
	}

	return 0;
}