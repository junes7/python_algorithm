#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(vector<int> &a, vector<int> &b) {
    if (a[0] == b[0]) return a[1] < b[1];
    return a[0] > b[0];
}
int main(void) {
    int n, cnt = 0;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 5; i < n; i++) {
        if (arr[i][0] == arr[4][0])
            cnt += 1;
    }
    cout << cnt;
    return 0;
}