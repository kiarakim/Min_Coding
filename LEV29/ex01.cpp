#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<vector<int>> v(6);
string name = "KGZHIR";

void run(int now) {

	cout << v[now];

	for (int i = 0; i < v[now].size(); i++) {
		cout << v[now];
		int next = v[now][i];
		run(next);
	}
}

// ���� ��� -> �ʱ�ȭ �ϱ� ����
// ���� ����Ʈ -> �޸� �Ƴ���, ���ɵ� ���� �� ����.

int main() {



	v[0] = { 1,2 };
	v[1] = { 3,4 };
	v[2] = { 5 };

	run(0);

	return 0;
}