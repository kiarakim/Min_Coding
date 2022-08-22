#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string map[3][3] = {
	"BHC", "BBQ","KFC",
	"MC","7AVE","PAPA",
	"DHC","OBS","MOMS"
};

string buf;
int dirY[4] = { -1,0,1,0 };
int dirX[4] = { 0,-1,0,1 };

void run(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int dy = dirY[i] + y;
		int dx = dirX[i] + x;

		if (dy < 0 || dy > 2 || dx < 0 || dx > 2) continue;

		buf += map[dy][dx];
	}
}

int main() {

	int y, x;
	cin >> y >> x;

	run(y, x);

	cout << buf;

	return 0;
}