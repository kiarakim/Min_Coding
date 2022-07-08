#include <iostream>
using namespace std;

// isExist함수로 보물찾기

int isExist(int arr[3][3], int target);

int main() {
	int v[3][3] = { 3,5,9,4,2,1,5,1,5 };
	int a[3];
	cin >> a[0] >> a[1] >> a[2];

	for (int i = 0; i < 3; i++) {
		if (isExist(v, a[i]) == 1)
			cout << a[i] << ":존재" << endl;
		else
			cout << a[i] << ":미발견" << endl;
	}
	return 0;
}

int isExist(int arr[3][3], int target) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == target)
				return 1;
		}
	}
	return 0;
}



//int v[3][3] = { 3,5,9,4,2,1,5,1,5 };
//void isExist(int (&a)[3]);
//
//int main() {
//
//	int a[3];
//	cin >> a[0] >> a[1] >> a[2];
//
//	isExist(a);
//	return 0;
//}
//
//void isExist(int (&a)[3]) {
//	int b[3] = { 0 };
//	for (int x = 0; x < 3; x++) {
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				if (a[x] == v[i][j]) {
//					b[x] = 1;
//					break;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		if (b[i] == 1)
//			cout << a[i] << ":존재" << endl;
//		else
//			cout << a[i] << ":미발견" << endl;
//	}
//}