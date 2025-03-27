#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });
    cout << arr[0].first << ' ' << arr[0].second;
    return 0;
}