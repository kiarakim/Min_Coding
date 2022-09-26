#include<string>
#include<iostream>
#include<vector>
using namespace std;
vector<int> answer;
string today = "2022.05.19";
vector<string> terms = { "Z 3", "D 5" };
vector<string> privacies = { "2019.01.01 D", "2019.11.15 Z" };
vector<int> Itoday;

void StoDate(string Sdate, vector<int>& Idate) {
    Sdate += '.';
    int a = 0, b = 0;
    string S[3];
    int idx = 0;
    while (1) {
        b = Sdate.find('.', a);
        if (b == -1) break;

        int size = b - a;
        S[idx++] = Sdate.substr(a, size);

        a = b + 1;
    }
    for (int i = 0; i < 3; i++) {
        Idate.push_back(stoi(S[i]));
    }

}

int isDone(vector<int> Iget, int plus) {

    if (Iget[1] + plus > 12) {
        Iget[0]++;
        Iget[1] = Iget[1] + plus - 12;
    }
    else
        Iget[1] = Iget[1] + plus;

    for (int i = 0; i < 3; i++) {
        if (Itoday[i] > Iget[i]) return 1;
        if (Itoday[i] < Iget[i]) return 0;
    }
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {

    StoDate(today, Itoday);

    for (int p = 0; p < privacies.size(); p++) {
        int plus = 0;
        string pInfo = privacies[p].substr(0, 10);
        char term = privacies[p][11];

        for (string t : terms) {
            if (t.find(term) != -1) {
                plus = int(t[2]) - '0';
            }
        }
        vector<int> Iget(3);
        StoDate(pInfo, Iget);

        if (isDone(Iget, plus) == 0) continue;
        answer.push_back(p + 1);
    }
    return answer;
}
int main() {
	solution(today, terms, privacies);
    for (int i : answer) {
        cout << i;
    }
}