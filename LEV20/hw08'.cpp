#include<iostream>
using namespace std;

int main() {

	int a[4], b[4];
	int R[8];
	int x = 0;
	int aN = 0;
	int bN = 0;

	for (int i = 0; i < 4; i++)
		cin >> a[i];
	for (int i = 0; i < 4; i++)
		cin >> b[i];

	while (1) {
		if (aN == 4 && bN == 4)break;
		if (aN == 4) 
			R[x++] = b[bN++];
		else if (bN == 4) 
			R[x++] = a[aN++];
		else if(a[aN]<=b[bN])
			R[x++] = a[aN++];
		else
			R[x++] = b[bN++];

		
	}

	//for (int i = 0; i < 8; i++) {
	//	if (aN == 4) 
	//		R[i] = b[bN++];
	//	else if(bN==4)
	//		R[i] = a[aN++];
	//	else {
	//		if (a[aN] < b[bN])
	//			R[i] = a[aN++];
	//		else if (a[aN] > b[bN])
	//			R[i] = b[bN++];
	//		else {
	//			R[i++] = a[aN++];
	//			R[i] = b[bN++];
	//		}
	//	}
	//}

	for (int i = 0; i < 8; i++) {
		cout << R[i] << ' ';
	}

	return 0;
}