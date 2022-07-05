#include <iostream>
using namespace std;

int main() {
	int map[10][10] = { 0 };

	int t = 1;

	//(3,6)에 왜 17이 들어갔지?
	//이 부근을 천천히 보고싶다면 어떤 디버깅 코드를 써야하나?

	for (int y = 0; y < 10; y++) {
		for (int x = 0; x < 10; x++) {
			if (y == 3 && x == 6)
				int d = 1;
			t = (t * 3 + 1234) % 22; 
			map[y][x] = t;
		}
	}
	// [3][4] 값 확인하기

	return 0;
}