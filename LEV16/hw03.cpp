#include <iostream>
using namespace std;

//문장 A 추가하기
int main() {
	char v[6] = {0};
	int index, len;

	cin >> v;
	cin >> index;

	//문자열 길이
	for (int i = 0; i < 6; i++) {
		if (v[i] == '\0') {
			len = i;
			break;
		}
	}

	//한칸 미루기
	/*for (int i = len; i >= index; i--) {
		v[i + 1] = v[i];
	}*/

	for (int i = len; i > index; i--) {
		v[i] = v[i - 1];
	}

	//"A" 넣기
	v[index] = 'A';

	cout << v;
	return 0;
}