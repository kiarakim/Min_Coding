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
		//path�迭�� �� ����� ���ž�. ���� ���
		path[lev] = i + 1;
		run(lev + 1);
		//path �迭 ����� ���� �����.
		path[lev] = 0;
	}
}

int main() {

	run(0);

	return 0;

}