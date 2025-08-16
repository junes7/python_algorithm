#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(const vector<int> &a, const vector<int> &b) {
    return a[1] < b[1];
}
int main(void) {
    int n, l, k, cnt = 0, scr = 0;
    cin >> n >> l >> k;
    vector<vector<int>> arr(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < n; i++) {
        if (cnt == k) break;
        if (arr[i][1] <= l) {
            scr += 140;
            cnt += 1;
        } else if (arr[i][0] <= l) {
            scr += 100;
            cnt += 1;
        }
    }
    cout << scr;
    return 0;
}