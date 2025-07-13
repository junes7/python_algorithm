#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}
int main(void) {
    int n, m, t, idx;
    char ch;
    cin >> n >> m;
    vector<int> scr(n);
    vector<pair<int, int>> rlt(m);
    for (int i = 0; i < n; i++)
        cin >> scr[i];
    for (int i = 0; i < m; i++) {
        cin >> idx;
        t = 0;
        for (int j = 0; j < n; j++) {
            cin >> ch;
            t += (ch == 'O' ? 1 : 0) * scr[j];
        }
        rlt[i] = make_pair(idx, t);
    }
    sort(rlt.begin(), rlt.end(), cmp);
    cout << rlt[0].first << ' ' << rlt[0].second;
    return 0;
}