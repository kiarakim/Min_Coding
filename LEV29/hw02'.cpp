#include<iostream>
using namespace std;

int evid[7] = { -1,0,0,1,2,4,4 };
int timeStamp[7] = { 8,3,5,6,8,9,10 };

void run(int s) {
	if (evid[s] == -1) {
		cout << s << "��index(���)\n";
		return;
	}

	run(evid[s]);

	cout << s << "��index(" << timeStamp[s] << "��)\n";

}

int main() {

	int startIdx;
	cin >> startIdx;

	run(startIdx);

	return 0;
}