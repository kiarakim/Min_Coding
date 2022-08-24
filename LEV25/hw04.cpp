#include<iostream>
#include<string>
using namespace std;

string str = "(((((^0^))((^^^)))(^_^)))))";

void arrange() {
	// ��ȣ ����
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

	//�� ����
	int a = 0;
	int idx = 0;
	int cnt = 1;
	while (1) {
		a = str.find('^', idx); // a���� ã�� �����ؼ� ^�� ��ġ�� a�� ����. 
		if (a == -1) break;			// ^��ã���� �ݺ��� ������

		if (str[a + 1] == '^') {// a�ڸ��� ^������ �� ^���
			cnt++; //cnt ���� �ǰ�
			if (cnt > 2) { //���� �̻� �Ǹ�
				str.erase(a + 1, 1); // a�ڸ��� �ִ� �� �ϳ� �����
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

	// ���� �� ����
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