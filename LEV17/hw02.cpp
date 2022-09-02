#include<iostream>
using namespace std;

// 네가 있는 거리에서

int main() {
	int v[8] = { 5,9,4,6,1,5,8,9 };
	int index, target;
	int offset = 0;
	cin >> index >> target;

	for (int i = index; i < 8; i++) {
		if (v[i] == target) 
			offset = i - index;
	}

	cout << offset;

	return 0;
}
