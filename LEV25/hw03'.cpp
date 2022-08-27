#include<iostream>
#include<string>
using namespace std;

string str;
int dat[52] = { 0 };

int step1() {
	if (str.find("bad") != -1) return 0;
	if (str.find("no") != -1) return 0;
	if (str.find("puck") != -1) return 0;
	return 1;
}

int step2() {
	if (str.find("_____") != -1) return 0;
	return 1;
}

int step3() {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') 
			dat[str[i] - 'A']++;
		
		if (str[i] >= 'a' && str[i] <= 'z') 
			dat[str[i] - 71]++;
	}
	for (int i = 0; i < 52; i++) {
		if (dat[i] > 5) return 0;
	}
	return 1;
}

int step4() {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= '0' && str[i] <= '9')
			return 0;
	}
	return 1;
}

int isValid() {
	if (step1() == 0) return 0;
	if (step2() == 0) return 0;
	if (step3() == 0) return 0;
	if (step4() == 0) return 0;
	return 1;
}

int main() {

	cin >> str;

	if (isValid()) cout << "pass";
	else cout << "fail";


	return 0;
}