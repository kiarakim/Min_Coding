#include <iostream>
using namespace std;

// 마음에 들지 않는 글자 바꾸기
int main() {

	char a[10], ch1, ch2;
	cin >> a >> ch1 >> ch2;

	//// 문자열 길이 구하기
	//int len = 0;
	//for (int i = 0; i < 10; i++) {
	//	if (a[i] == NULL) {
	//		len = i;
	//		break;
	//	}
	//}

	// 문자 바꾸기
	for (int i = 0; i < 10; i++) {
		if (a[i] == ch1)
			a[i] = ch2;
	}
	
	// 출력
	/*for (int i = 0; i < len; i++)
		cout << a[i];*/
	cout << a;
	return 0;
}