#include<iostream>
using namespace std;

struct sketchbook
{
	char arr[3][4];
};

int main() {


	struct sketchbook image;

	int dat[26] = { 0 };

	for (int i = 0; i < 3; i++)
		cin >> image.arr[i];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			dat[image.arr[i][j] - 65] = 1;
	}

	for (int i = 0; i < 26; i++) {
		if (dat[i])
			cout << (char)(i + 65);
	}

	return 0;
}
