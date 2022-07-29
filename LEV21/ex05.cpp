#include<iostream>
using namespace std;

// 문자열로 출력하기
//int path[2] = { 0 };
//void run(int lev) {
//	if (lev == 2) {
//		for (int i = 0; i < lev; i++)
//			cout << (char)(path[i]+65) << " ";
//		cout << endl;
//		return;
//	}
//
//	for (int i = 0; i < 4; i++) {
//		path[lev] = i;
//		run(lev + 1);
//		path[lev] = 0;
//	}
//}

char path[3];
void run(int lev) {
	if (lev == 2) {
		cout << path << endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		path[lev] = 'A' + i;
		run(lev + 1);
		path[lev] = 0;
	}
}

int main() {

	run(0);

	return 0;

}