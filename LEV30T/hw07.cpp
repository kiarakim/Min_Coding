#include<iostream>
#include<vector>
using namespace std;

vector<string> v;
string path[4];

void run(int day) {
	if (day == 3) {
		cout << path[0] << ' ' << path[1] << ' ' << path[2] << "\n";
		return;
	}

	for (int i = 0; i < 3; i++) {
		path[day] = v[i];
		run(day + 1);
		path[day] = "";
	}
}

int main() {

	for (int i = 0; i < 3; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}

	run(0);

	return 0;
}