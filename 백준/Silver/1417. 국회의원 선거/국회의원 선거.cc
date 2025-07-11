#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, cnt = 0, tar, maxn;
    cin >> n;
    cin >> tar;
    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];
    if (n == 1) {
        cout << cnt;
        return 0;
    }
    maxn = *max_element(arr.begin(), arr.end());
    while (tar <= maxn) {
        tar += 1;
        cnt += 1;
        arr[find(arr.begin(), arr.end(), maxn) - arr.begin()] -= 1;
        maxn = *max_element(arr.begin(), arr.end());
    }
    cout << cnt;
    return 0;
}