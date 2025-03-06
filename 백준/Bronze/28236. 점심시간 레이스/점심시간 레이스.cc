#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, k, a, b, s = 0;
    vector<pair<int, int>> rlt;
    cin >> n >> m >> k;
    for (int i = 0; i < k; i++) {
        s = 0;
        cin >> a >> b;
        s += m + 1 - b;
        if (a > 1)
            s += a - 1;
        rlt.push_back(make_pair(i + 1, s));
    }
    sort(rlt.begin(), rlt.end(), [](const pair<int, int> a, const pair<int, int> b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    });
    cout << rlt[0].first;
    return 0;
}