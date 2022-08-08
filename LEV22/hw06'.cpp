#include<iostream>
#include<cstring>
using namespace std;

/*
int main() { 

	char arr[4][10];
	for (int i = 0; i < 4; i++)
		cin >> arr[i];
	int dat[10] = { 0 };
	int len = 0;

	for (int i = 0; i < 4; i++) {
		len = strlen(arr[i]);
		dat[len] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		if (dat[i]) {
			cout << arr[dat[i] - 1] << endl;
		}
	}

	return 0;
}
*/

int main() {

	char arr[4][10];
	for (int i = 0; i < 4; i++)
		cin >> arr[i];

	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 4; j++) {
			int a = strlen(arr[i]);
			int b = strlen(arr[j]);
			char temp[10];
			if (a > b) {
				strcpy(temp, arr[i]);
				strcpy(arr[i], arr[j]);
				strcpy(arr[j], temp);
			}
		}
	}

	for (int i = 0; i < 4; i++)
		cout << arr[i] << endl;

	return 0;
}