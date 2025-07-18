#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(const vector<int> &a, const vector<int> &b) {
    return a[0] > b[0];
}
int main(void) {
    int n, m, rlt = 0;
    cin >> n >> m;
    vector<vector<int>> arr(m, vector<int>(2, 0));
    for (int i = 0; i < m; i++)
        cin >> arr[i][0] >> arr[i][1];
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < m - 1; i++) {
        if (arr[i][0] >= n) continue;
        rlt += n - arr[i][0];
    }
    cout << rlt;
    return 0;
}