#include<iostream>
using namespace std;

int main() {

	char alph[4][5][4] = {
		{" # ","# #","###","# #","# #"},
		{"###","# #","###","# #","###"},
		{"###","# #","#  ","# #","###"},
		{"## ","# #","# #","# #","## "}
	};

	int n;
	cin >> n;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++)
			cout << alph[n][i][j];
		cout << endl;
	}

	return 0;
}