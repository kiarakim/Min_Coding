#include <iostream>
using namespace std;

int a[100000] = { 5 };

int main() {
	for (int i = 0; i < 100000; i++) {
		a[i + 1] = a[i] * 2;
		// 몇 번 index부터 21억이 넘어가 음수가 되는가? -> return 0에 커서 두고 Ctrl+F10. 조사식 확인
		
		// index 28부터 천천히 보고싶다? 아래 참고
		if (i == 27) {
			int d = 1;
		}
	}

	return 0;
}