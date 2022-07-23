#include<iostream>
#include<cstring>
using namespace std;

int isSame(char a[8], char b[8]);

int main() {

    struct Train {
        int win;
        char name[8];
    };

    Train train[7] = {
        {15, "summer"},
        {33, "cloe"},
        {24, "summer"},
        {28, "niki"},
        {32, "jenny"},
        {20, "summer"},
        {40, "coco"}
    };

    char girl[8] = { 0 };
    int age;
    cin >> girl >> age;

    for (int i = 0; i < 7; i++) {
        if ((age == train[i].win) && isSame(girl, train[i].name)) {
            cout << i;
            break;
        }
    }

	return 0;
}

int isSame(char a[8], char b[8]) {
    for (int i = 0; i < 8; i++) {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}