#include <iostream>
using namespace std;

char v[3][10];
char arr[3];

//²¿¸®Ã£±â
int main() {
	for (int i = 0; i < 3; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			if (v[i][j] == NULL) {
				cout << v[i][j - 1];
				break;
			}
		}
	}
	return 0;
}