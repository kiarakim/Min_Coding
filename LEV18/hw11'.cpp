#include<iostream>
#include<cstring>
using namespace std;

// ������ �����ұ�?
char arr[20];
char ghost[6] = "GHOST";
int isExist(int n);

int main() {

	cin >> arr;
	int len = strlen(arr);

	int flag = 0;
	for (int i = 0; i < len - 4; i++) {
		flag = isExist(i);
		if (flag == 1) break;
	}

	if (flag == 1) cout << "����";
	else cout << "�������� ����";

	return 0;
}

int isExist(int n) {
	for (int i = 0; i < 5; i++) {
		if (ghost[i] != arr[i + n])
			return 0;
	}

	return 1;
} 