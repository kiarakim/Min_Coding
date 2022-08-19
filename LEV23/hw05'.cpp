#include<iostream>
using namespace std;
// 자기자리 찾기

int arr[8];

void quickSort(int start, int end) {

	if (start >= end) return;

	int pivot = start;
	int i = pivot + 1;
	int j = end;
	int temp;

	while (i <= j) {
		while (arr[i] <= arr[pivot])
			i++;
		while (arr[j] >= arr[pivot] && j > start)
			j--;

		if (i > j) {
			temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}
		else {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}

		/*quickSort(start, j - 1);
		quickSort(j + 1, end);*/
	}
}

int main() {

	for (int i = 0; i < 8; i++)
		cin >> arr[i];
	int len = 8;
	quickSort(0, len - 1);

	for (int i = 0; i < len; i++)
		cout << arr[i] << ' ';


	return 0;
}


/*
void quickSort(int start, int end) {
	
	if (start >= end) return;

	int pivot = start;
	int i = pivot + 1;
	int j = end;
	int temp;

	while (i <= j) {
		while (arr[i] <= arr[pivot])
			i++;
		while (arr[j] >= arr[pivot] && j > start)
			j--;

		if (i > j) {
			temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}
		else {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}

		quickSort(start, j - 1);
		quickSort(j + 1, end);
	}
}

int main() {

	for (int i = 0; i < 8; i++)
		cin >> arr[i];
	int len = 8;
	quickSort(0, len - 1);

	for (int i = 0; i < len; i++)
		cout << arr[i] << ' ';


	return 0;
}
*/

/* 선생님 코드
#include <iostream>
using namespace std;

int vect[8];

int main()
{
	for (int i = 0; i < 8; i++)
	{
		cin >> vect[i];
	}

	int pivot = vect[0];
	int a = 1;
	int b = 7;

	while (1)
	{
		//a 이동
		for (a = a; a < 8; a++)
		{
			if (vect[a] > pivot) break;
		}

		//b 이동
		for (b = b; b >= 1; b--)
		{
			if (vect[b] < pivot) break;
		}

		if (a > b) break;

		//swap
		swap(vect[a], vect[b]);
	}

	//마지막 swap
	swap(vect[0], vect[b]);

	for (int i = 0; i < 8; i++)
	{
		cout << vect[i] << " ";
	}

	return 0;
}

*/