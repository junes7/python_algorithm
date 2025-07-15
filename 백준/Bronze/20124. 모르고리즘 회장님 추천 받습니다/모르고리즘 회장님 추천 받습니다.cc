#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(const pair<string, int> &a, const pair<string, int> &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}
int main(void) {
    int n;
    cin >> n;
    vector<pair<string, int>> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;
    sort(arr.begin(), arr.end(), cmp);
    cout << arr[0].first;
    return 0;
}