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
	// �ƴ� m = bts(m)��� �ص� ��.

	snsd(m); // �̷��� �ϸ� ����. ���� �ڵ����� �ٲ�

	return 0;
}