#include<iostream>
#include<vector>
using namespace std;

// ���׳��� F5 -> ���� -> ȣ�⽺��
int main() {
	
	int a = 10;
	char ch = 'C';
	//cin >> a >> ch;
	vector<char> arr(a + 1);

	int t = a;
	char ct = ch;

	for (int i = 0; i < 5; i++)
		arr[a - i] = ct++;

	for (int i = 0; i < 4; i++)
		arr.push_back(++ch);
	
	return 0;
}