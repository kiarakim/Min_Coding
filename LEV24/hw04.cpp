#include<iostream>
#include<string>
using namespace std;

string str;
int dat[26] = { 0 };

char getMax() {
	int max = -99;
	int maxIdx = 0;
	for (int i = 0; i < 26; i++) {
		if (max < dat[i]) {
			max = dat[i];
			maxIdx = i;
		}
	}
	return (char)(maxIdx + 65);
}

char getMin() {
	int min = 99;
	int minIdx = 0;
	for (int i = 0; i < 26; i++) {
		if (min > dat[i]) {
			min = dat[i];
			minIdx = i;
		}
	}
	return (char)(minIdx + 65);
}


int main() {

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		int a = (int)str[i] - 65;
		dat[a]++;
	}

	cout << getMax() << "\n";
	cout << getMin() << "\n";

	return 0;
}

// ¼±»ý´Ô ÄÚµå
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int dat[100] = { 0 };
//	string str;
//
//	cin >> str;
//	for (int i = 0; i < str.size(); i++) {
//		dat[str[i]]++;
//	}
//
//	char min = 'A';
//	char max = 'A';
//	for (int i = 'A'; i <= 'K'; i++) {
//		if (dat[min] > dat[i]) min = i;
//		if (dat[max] < dat[i]) max = i;
//	}
//
//	cout << max << "\n" << min;
//
//	return 0;
//}