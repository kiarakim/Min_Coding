#include<iostream>
using namespace std;
// ����ġ�� 

char path[10];
void run(int lev) {
	
	//if (lev > 0 && (path[lev - 1] == '2' || path[lev - 1] == '4')) return;

	if (lev == 3) {
		cout << path << endl;
		return;
	}

	for (int i = 1; i <= 6; i++) {
		if (i == 2 || i == 4) continue; // �ƿ� �ȵ�
		path[lev] = '0' + i;
		run(lev + 1);
		
	}
}

int main() {

	run(0);

	return 0;
}