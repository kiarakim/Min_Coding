#include<iostream>
#include<cstring>
using namespace std;

// 양쪽에서 아이찾기
int main() {

	char arr[10] = "ATKPTCABC";

	char a, b;
	cin >> a >> b;

	int len = strlen(arr);

	int ai, bi;

	for (int i = 0; i < len; i++) {
		if (arr[i] == a) {
			ai = i;
			break;
		}
	}

	for (int i = len - 1; i >= 0; i--) {
		if (arr[i] == b) {
			bi = i;
			break;
		}
	}

	cout << bi - ai;

	return 0;
}