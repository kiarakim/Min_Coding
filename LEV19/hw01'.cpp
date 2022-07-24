#include<iostream>
using namespace std;

void BBQ(int* a, int* b);

int main() {

	int a, b;

	BBQ(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b;
	return 0;
}

void BBQ(int* a, int* b) {
	int arr[5];
	for (int i = 0; i < 5; i++)
		cin >> arr[i];
	int max = 0;
	int min = 99;

	for (int i = 0; i < 5; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	*a = max;
	*b = min;
}