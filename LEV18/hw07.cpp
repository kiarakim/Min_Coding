#include<iostream>
using namespace std;

// 한줄로 알파벳 정렬하기
int main() {
    char alphabet[5][3] = {
    {'A', 'B', 'C'},
    {'A', 'G', 'H'},
    {'H', 'I', 'J'},
    {'K', 'A', 'B'},
    {'A', 'B', 'C'}
    };

    int dat[26] = { 0 };

    for (int i = 0; i < 5; i++) {
        for(int j=0;j<3;j++)
            dat[alphabet[i][j] - 65]++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (dat[i]) {
            for (int j = 0; j < dat[i]; j++)
                cout << (char)(i + 65);
        }
    }

	return 0;
}