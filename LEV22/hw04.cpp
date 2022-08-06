#include<iostream>
#include<cstring>
using namespace std;

int ground = 1;
char A[5];
void move(int lev) {
	
	cin >> A;
	if (strcmp(A, "up") == 0)
		ground++;
	else if (strcmp(A, "down") == 0)
		ground--;

	if (lev == 5) {
		if (ground < 0)
			cout << 'B' << -ground + 1;
		else
			cout << ground;
		return;
	}

	move(lev + 1);
}

int main() {

	move(1);

	return 0;
}