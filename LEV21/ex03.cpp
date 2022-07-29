#include<iostream>
using namespace std;

int path[2] = { 0 };
void run(int lev) {
	if (lev == 2) {
		for (int i = 0; i < lev; i++)
			cout << path[i] << " ";
		cout << endl;
		return;
	}

	for (int i = 0; i < 2; i++) {
		//path배열에 난 여기로 갈거야. 내용 기록
		path[lev] = i + 1;
		run(lev + 1);
		//path 배열 기록한 것을 지운다.
		path[lev] = 0;
	}
}

int main() {

	run(0);

	return 0;

}