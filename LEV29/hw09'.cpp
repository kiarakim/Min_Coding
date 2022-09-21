#include<iostream>
#include<vector>
using namespace std;

string str1, str2;
int arrCnt[15];

int compare(int idx) {
	int i = idx;
	int cnt = 0;
	
	for (int j = 0; j < str2.size() - 1; j++) {
		if (str2[j] != str1[idx]) continue;
		cnt++;
		idx++;
		if (str2[j + 1] != str1[idx]) break;
	}
	arrCnt[i] = cnt;

	if (cnt == 0) return 0;
	return cnt - 1;
}

void maxLen() {
	int max = -99;
	int idx = 0;
	for (int i = 0; i < 15; i++) {
		if (arrCnt[i] && max < arrCnt[i]) {
			max = arrCnt[i];
			idx = i;
		}
	}
	for (int i = idx; i < idx + max; i++)
		cout << str1[i];
}

int main() {

	cin >> str1 >> str2;

	for (int i = 0; i < str1.size() - 1; i++) {
 		i += compare(i);
	}

	maxLen();

	return 0;
}