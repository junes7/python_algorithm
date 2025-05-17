#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
string TenToTwo(string st) {
    int num = stoi(st);
    string rlt = "";
    while (num > 0) {
        rlt += (num % 2) + 48;
        num /= 2;
    }
    for (int i = rlt.size(); i < 6; i++)
        rlt += "0";
    reverse(rlt.begin(), rlt.end());
    return rlt;
}
int main(void) {
    int n, idx;
    cin >> n;
    string st, row, col;
    for (int i = 0; i < n; i++) {
        cin >> st;
        stringstream ss(st);
        vector<string> t(3);
        idx = 0, row = "", col = "";
        while (getline(ss, st, ':')) {
            t[idx++] = TenToTwo(st);
        }
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 3; j++) {
                col += t[j][i];
            }
        }
        row = t[0] + t[1] + t[2];
        cout << col << ' ' << row << "\n";
    }
    return 0;
}