#include<iostream>
#include<cstring>
using namespace std;

int y = 5;
int x = 5;

void mouse(char str[]) {
	if (strcmp(str, "up") == 0) y -= 1;
	else if (strcmp(str, "down") == 0) y += 1;
	else if (strcmp(str, "left") == 0) x -= 1;
	else if (strcmp(str, "right") == 0) x += 1;
	else if (strcmp(str, "click") == 0) 	
		cout << y << "," << x << endl;
}

int main() {

	int n;
	cin >> n;
	char str[6];
	for (int i = 0; i < n; i++) {
		cin >> str;
		mouse(str);
	}


	return 0;
}