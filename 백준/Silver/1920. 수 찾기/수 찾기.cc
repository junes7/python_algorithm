#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, elem;
    cin >> n;
    vector<int> arr, tar;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        arr.push_back(elem);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> elem;
        tar.push_back(elem);
    }
    sort(arr.begin(), arr.end(), less<int>());
    for (int i = 0; i < m; i++) {
        elem = lower_bound(arr.begin(), arr.end(), tar[i]) - arr.begin();
        cout << (elem < n && arr[elem] == tar[i] ? 1 : 0) << "\n";
    }
    return 0;
}