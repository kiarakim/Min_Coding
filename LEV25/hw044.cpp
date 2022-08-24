#include<iostream>
#include<string>
using namespace std;

string str = "(((((^0^))((^^^)))(^_^)))))";

void removeChar(char ch) {
	int a = 0;
	while (1) {
		a = str.find(ch, a);
		if (a == -1) break;
		if (str[a + 1] == ch) {
			str.erase(a + 1, 1);
		}
		else a++;
	}
}

void step1() { // °ýÈ£ Á¤¸®
	removeChar('(');
	removeChar(')');
}

void step2() { // ´«¿ôÀ½ °¹¼ö Á¤¸®
	int a = -1;
	int b;

	while (1) {
		a = str.find("^^^", a + 1);
		if (a == -1) break;
		for (int i = a; i <= str.length(); i++) {
			if (str[i] != '^') {
				b = i;
				break;
			}
		}
		int size = b - a - 2;
		str.erase(a, size);
	}
}

void step3() { // ´«°ú ´« »çÀÌ
	int a = -1;
	int b = 0;
	while (1) {
		a = str.find('^', a + 1);
		if (a == -1) break;
		if (a + 2 >= str.length()) break;
		if (str[a + 2] == '^') str[a + 1] = '_';
	}
}
int main() {

	//cin >> str;

	step1();
	step2();
	step3();

	cout << str;

	return 0;
}