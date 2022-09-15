#include<iostream>
#include<vector>
using namespace std;

vector<int> bts(vector<int> v) {
	v[0] = 100;

	return v;
}

void snsd(vector<int>& v) {
	v[0] = 100;
}

int main() {

	vector<int> m = { 1,2,3 };

	vector<int> ret = bts(m);
	// 아님 m = bts(m)라고 해도 됨.

	snsd(m); // 이렇게 하면 참조. 값이 자동으로 바뀜

	return 0;
}