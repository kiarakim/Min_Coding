#include <iostream>
using namespace std;

// ������ ���� �ʴ� ���� �ٲٱ�
int main() {

	char a[10], ch1, ch2;
	cin >> a >> ch1 >> ch2;

	//// ���ڿ� ���� ���ϱ�
	//int len = 0;
	//for (int i = 0; i < 10; i++) {
	//	if (a[i] == NULL) {
	//		len = i;
	//		break;
	//	}
	//}

	// ���� �ٲٱ�
	for (int i = 0; i < 10; i++) {
		if (a[i] == ch1)
			a[i] = ch2;
	}
	
	// ���
	/*for (int i = 0; i < len; i++)
		cout << a[i];*/
	cout << a;
	return 0;
}