#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int cmp(const vector<int> &a, const vector<int> &b) {
    if (a[1] == b[1] && a[2] == b[2]) return a[0] < b[0];
    if (a[1] == b[1]) return a[2] < b[2];
    return a[1] < b[1];
}
int main(void) {
    int n, idx, m, t, elem;
    cin >> n;
    vector<vector<int>> rank(n);
    for (int i = 0; i < n; i++) {
        cin >> idx;
        m = 1, t = 0;
        for (int j = 0; j < 3; j++) {
            cin >> elem;
            m *= elem;
            t += elem;
        }
        rank[i] = {idx, m, t};
    }
    sort(rank.begin(), rank.end(), cmp);
    for (int i = 0; i < 3; i++)
        cout << rank[i][0] << ' ';
    return 0;
}