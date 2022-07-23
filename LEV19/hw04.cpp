#include<iostream>
using namespace std;


int main() {
	
	struct  Data
	{
		int x, y, z;
	};

	Data a,b;

	cin >> a.x >> a.y >> a.z >> b.x >> b.y >> b.z;

	cout << a.x + b.x << endl;
	cout << a.y + b.y << endl;
	cout << a.z + b.z << endl;


	return 0;
}