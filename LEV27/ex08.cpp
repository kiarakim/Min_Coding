#include<iostream>
#include<string>
using namespace std;

string name = "ACDEF";
int map[5][5] = {
	0,1,1,1,0,
	0,0,0,1,0,
	0,1,0,0,1,
	0,1,1,0,0,
	1,0,0,0,0
};

void like(char ch) {
	int idx = name.find(ch);
	for (int i = 0; i < 5; i++) {
		if (map[idx][i])
			cout << name[i] <<' ';
	}
}

void popular() {
	int idx = 0;
	int max = 0;
	for (int x = 0; x < 5; x++) {
		int person = 0;
		for (int y = 0; y < 5; y++) {
			if (map[y][x])
				person++;
		}
		if (max < person) {
			max = person;
			idx = x;
		}
	}
	cout << name[idx];
}

int main() {

	like('A');
	popular();

	return 0;
}