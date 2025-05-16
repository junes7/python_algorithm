#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    int idx, cnt = 0, time, h, m, s;
    vector<vector<int>> t(2, vector<int>(3, 0));
    string st;
    while (cin >> st) {
        stringstream ss(st);
        idx = 0;
        while (getline(ss, st, ':')) {
            t[cnt][idx++] = stoi(st);
        }
        cnt += 1;
    }
    time = t[1][0] * 3600 + t[1][1] * 60 + t[1][2] - (t[0][0] * 3600 + t[0][1] * 60 + t[0][2]);
    if (time < 0)
        time += 60 * 60 * 24;
    h = time / 3600;
    m = (time % 3600) / 60;
    s = (time % 3600) % 60;
    cout.width(2);
    cout.fill('0');
    cout << h << ':';
    cout.width(2);
    cout.fill('0');
    cout << m << ':';
    cout.width(2);
    cout.fill('0');
    cout << s;
    return 0;
}