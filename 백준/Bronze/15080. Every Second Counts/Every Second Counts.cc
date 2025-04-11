#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    vector<string> st(2);
    int idx, start, end, rlt;
    vector<vector<int>> arr(2, vector<int>(3, 0));
    for (int i = 0; i < 2; i++) {
        getline(cin, st[i]);
        idx = 0;
        stringstream ss(st[i]);
        while (getline(ss, st[i], ':'))
            arr[i][idx++] = stoi(st[i]);
    }
    start = arr[0][0] * 3600 + arr[0][1] * 60 + arr[0][2];
    end = arr[1][0] * 3600 + arr[1][1] * 60 + arr[1][2];
    rlt = end - start;
    if (rlt < 0)
        rlt += 24 * 3600;
    cout << rlt;
    return 0;
}