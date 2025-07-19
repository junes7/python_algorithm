#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, final = 0;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    vector<int> maxn(m, 0), rlt(n, 0), idxn;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
        sort(arr[i].begin(), arr[i].end(), less<int>());
        for (int j = 0; j < m; j++) {
            if (maxn[j] < arr[i][j])
                maxn[j] = arr[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (arr[i][j] == maxn[j])
                rlt[i] += 1;
            if (j == m - 1 && final < rlt[i])
                final = rlt[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (final == rlt[i])
            idxn.push_back(i + 1);
    }
    sort(idxn.begin(), idxn.end());
    for (int i = 0; i < idxn.size(); i++)
        cout << idxn[i] << ' ';
    return 0;
}