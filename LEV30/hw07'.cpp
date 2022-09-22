#include<iostream>
using namespace std;

int num[5];
int cnt = 0;
int sum = 0;
int path[5];

void run(int lev, int sum) {
	if (lev == 5) {
		if (sum >= 10 && sum <= 20) 
			cnt++;
		return;
	}
	
	for (int i = 0; i < 2; i++) {
		if (i == 0) path[lev] = num[lev];
		else path[lev] = 0;
		run(lev + 1, sum + path[lev]);
	}

}

void sort() {
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (num[i] > num[j]) {
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
}

int main() {

	for (int i = 0; i < 5; i++)
		cin >> num[i];
	
	sort();

	run(0, 0);
	cout << cnt;

	return 0;
}