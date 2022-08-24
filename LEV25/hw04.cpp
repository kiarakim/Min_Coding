#include<iostream>
#include<string>
using namespace std;

string str = "(((((^0^))((^^^)))(^_^)))))";

void arrange() {
	// 괄호 정리
	int a = 0;
	int b = 0;
	
	while (1) {
		a = str.find('(', a);
		if (a == -1) break;
		if (str[a + 1] == '(') {
			str.erase(a + 1, 1);
		}
		else a++;
	}

	while (1) {
		b = str.find(')', b);
		if (b == -1) break;
		if (str[b + 1] == ')') {
			str.erase(b + 1, 1);
		}
		else b++;
	}

	//눈 정리
	int a = 0;
	int idx = 0;
	int cnt = 1;
	while (1) {
		a = str.find('^', idx); // a부터 찾기 시작해서 ^의 위치를 a에 저장. 
		if (a == -1) break;			// ^못찾으면 반복문 나가기

		if (str[a + 1] == '^') {// a자리에 ^다음에 또 ^라면
			cnt++; //cnt 갱신 되고
			if (cnt > 2) { //세개 이상 되면
				str.erase(a + 1, 1); // a자리에 있는 값 하나 지우기
				cnt--;
			}
			else {
				idx = a + 1;
			}
		}
		else {
			idx = a + 1;
			cnt = 1;
		}
	}

	// 눈과 눈 사이
	a = 0;
	int b = 0;
	while (1) {
		a = str.find('^', b);
		b = str.find('^', a + 1);
		if (a == -1) break;
		if (b - a == 2) {
			string temp = str.substr(a + 1, 1);
			if (temp != "_" || temp != "(" || temp != ")") {
				str.erase(a + 1, 1);
				str.insert(a + 1, "_");
			}
		}

		b++;
	}
}

int main() {

	//cin >> str;

	arrange();

 	cout << str;

	return 0;
}