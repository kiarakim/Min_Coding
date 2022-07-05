#include <iostream>
using namespace std;

//잡초문자 제거하기
int main() {
	char v[8];
	int index, len = 0;

	cin >> v;
	cin >> index;

	//문자열 길이 구하기
	for (int i = 0; i < 8; i++) {
		if (v[i] == NULL) {
			len = i;
			break;
		}
	}

	//당기기
	for (int i = index; i < len; i++) {
		v[i] = v[i + 1];
	}

	//출력
	cout << v;

	return 0;
}