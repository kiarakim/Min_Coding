#include<iostream>
using namespace std;

int n;
int nums[5];
int mini = 1000;
int used[5];
int path[3];

void setMin() {
	int sum = path[0] * 100 + path[1] * 10 + path[2];
	if (mini > sum)
		mini = sum;
}

void run(int lev) {

	if (lev == 3) {
		setMin();
		return;
	}

	for (int i = 0; i < n; i++) {
		if (used[i] == 1) continue;
		path[lev] = nums[i];
		if (path[0] == 0) {
			path[lev] = 0;
			continue;
		}
		used[i] = 1;
		run(lev + 1);
		used[i] = 0;
	}
}

void sort() {
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (nums[i] > nums[j]) {
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> nums[i];

	sort();

	run(0);
	cout << mini;

	return 0;
}