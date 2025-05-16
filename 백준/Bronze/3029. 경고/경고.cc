#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    int idx, time;
    string st;
    vector<vector<int>> t(2, vector<int>(3, 0));
    for (int i = 0; i < 2; i++) {
        idx = 0;
        cin >> st;
        stringstream ss(st);
        while (getline(ss, st, ':'))
            t[i][idx++] = stoi(st);
    }
    time = (t[1][0] - t[0][0]) * 3600 + (t[1][1] - t[0][1]) * 60 + (t[1][2] - t[0][2]);
    if (time <= 0)
        time += 60 * 60 * 24;
    cout.width(2);
    cout.fill('0');
    cout << (time / 3600) << ':';
    cout.width(2);
    cout.fill('0');
    cout << (time % 3600) / 60 << ':';
    cout.width(2);
    cout.fill('0');
    cout << (time % 3600) % 60;
    return 0;
}