#include<iostream>
#include<cstring> // ���̺귯�� : ������ ����� ����� ���� �ҽ��ڵ� �� �Լ�
using namespace std;
//strlen(A) ���ڿ� ����
//strcmp(A,B) ���ڿ� 0�̸� ���ٰ� �˷���

int main() {

	//cout << strlen(arr1); //���ڿ� ���� ���ϱ�. <cstirng> include�ؾ���

	//strcmp : string compare -> ������ 0�� �����Ѵ�.
	
	/*char arr[10];
	cin >> arr;

	int len = strlen(arr);

	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";
	cout << endl;
	for(int i=len-1;i>=0;i--)
		cout << arr[i] << " ";*/
	
	char buf1[] = "ABC";
	char buf2[] = "ABC";
	if (!strcmp(buf1, buf2))cout << "O";
	else cout << "X";

	return 0;
}
