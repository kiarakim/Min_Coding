#include<iostream>
using namespace std;

int nums[11] = { 0,3,1,2,1,3,2,1,2,1,0 };

void run(int now, int val) {

	if (val == 0) {
		cout << "���� ";
		return;
	}

	cout << val << ' ';
	
	run(now + val, nums[now+val]);
	
	cout << val << ' ';
}

int main() {


	int n;
	cin >> n;

	cout << "���� ";
	run(n, nums[n]);
	cout << "���� ";

	return 0;
}