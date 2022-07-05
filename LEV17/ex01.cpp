#include <iostream>
using namespace std;

int a[50] = { 5 };

void abc() {

	for (int i = 1; i < 50; i++) {

		// 만약 42번 째 index부터 뭔가 값이 이상하다?

		// -> 디버깅 코드를 삽입한다.
		if (i == 42) {
			int d = 1;
		}
		a[i] = (a[i - 1] * 7 + 41) % 11;
	}
}

// '#'출력
int main() { 
	abc();

	return 0;
}