#include <iostream>
using namespace std;

// 사각형 출력하기
int main() {
	int x, y;
	char a;
	cin >> x >> y >> a;

	for (int t = 0; t < 2; t++) {
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++)
				cout << a;
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}