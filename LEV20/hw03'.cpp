#include<iostream>
using namespace std;

int main() {

	char arr[11];
	cin >> arr;

	int len = 0;
	for (int i = 0; i < 11; i++) {
		if (arr[i] == NULL) {
			len = i;
			break;
		}
	}
	int mid = len / 2;
	int isSame = 1;
	
	if (len % 2 == 1)
		isSame = 0;
	else {
		for (int i = 0; i < mid; i++) {
			if (arr[i] != arr[i + mid]) {
				isSame = 0;
				break;
			}
		}
	}

	if (isSame == 1) cout << "동일한문장";
	else cout << "다른문장";



	return 0;


}