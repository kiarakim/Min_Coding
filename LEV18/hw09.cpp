#include<iostream>
using namespace std;

// 몇 층에 있으세요?
int apt[5][3] = {
    {15, 18, 17},
    {4, 6, 9},
    {10, 1, 3},
    {7, 8, 9},
    {15, 2, 6}
};

int family[3];

int isPattern(int y);

int main() {

    cin >> family[0] >> family[1] >> family[2];
    int floor = 0;
    for (int i = 4; i >= 0; i--) {
        floor = isPattern(i);
        if (floor == 1) {
            floor = 5 - i;
            break;
        }
    }

    cout << floor << "층";
    
    return 0;
}

int isPattern(int y) {
    for (int i = 0; i < 3; i++) {
        if (family[i] != apt[y][i])return 0;
    }
    return 1;
}