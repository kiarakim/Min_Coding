#include<iostream>
#include<cstring>
using namespace std;

char path[6];
char arr[10];
int n;
int len;

void run(int lev) {
	if (lev == n) {
		cout << path << endl;
		return;
	}

	for (int i = 0; i < len ; i++) {
		path[lev] = arr[i];
		run(lev + 1);
	}
}

int main() {

	cin >> arr;
	cin >> n;
	len = strlen(arr);

	run(0);

	return 0;
}