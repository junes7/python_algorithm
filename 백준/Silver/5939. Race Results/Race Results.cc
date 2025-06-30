#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(const vector<int> &a, const vector<int> &b) {
    if (a[0] == b[0] && a[1] == b[1]) return a[2] < b[2];
    if (a[0] == b[0]) return a[1] < b[1];
    return a[0] < b[0];
}
int main(void) {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(3, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++)
            cout << arr[i][j] << ' ';
        cout << "\n";
    }
    return 0;
}