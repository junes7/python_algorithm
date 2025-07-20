#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n), diff(n - 1);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    for (int i = 1; i < n; i++)
        diff[i - 1] = arr[i] - arr[i - 1];
    sort(diff.begin(), diff.end(), less<int>());
    cout << diff[0] << ' ' << count(diff.begin(), diff.end(), diff[0]);
    return 0;
}