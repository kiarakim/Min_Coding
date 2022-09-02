#include<iostream>
using namespace std;

int main() {

	int a, b, c, d, e;
	int* simData[5] = { &a,&b,&c,&d,&e };

	cin >> a >> b >> c >> d >> e;

	int max = *simData[0];
	int min = *simData[0];

	for (int i = 0; i < 5; i++) {
		if (max < *simData[i])
			max = *simData[i];
		if (min > *simData[i])
			min = *simData[i];
	}

	cout << "MAX:" << max << endl;
	cout << "MIN:" << min;

	return 0;
}