#include <iostream>
using namespace std;

int main() {
	int map[10][10] = { 0 };

	int t = 1;

	//(3,6)�� �� 17�� ����?
	//�� �α��� õõ�� ����ʹٸ� � ����� �ڵ带 ����ϳ�?

	for (int y = 0; y < 10; y++) {
		for (int x = 0; x < 10; x++) {
			if (y == 3 && x == 6)
				int d = 1;
			t = (t * 3 + 1234) % 22; 
			map[y][x] = t;
		}
	}
	// [3][4] �� Ȯ���ϱ�

	return 0;
}