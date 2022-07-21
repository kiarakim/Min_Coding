#include <iostream>
#include<cstring>
using namespace std;

int a[4][5] = {s
	1,1,1,1,1,
	2,2,2,2,2,
	1,0,1,0,1,
	0,1,0,1,0
};

int main() {
	int x = 1;
	int y = 1;

	cout << a[x - 1][y] + a[x][y - 1] + a[x + 1][y] + a[x][y + 1];

	return 0;
}