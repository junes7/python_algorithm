#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n), dp(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    dp[0] = arr[0];
    for (int i = 1; i < n; i++)
        dp[i] = max(arr[i], arr[i] + dp[i - 1]);
    cout << *max_element(dp.begin(), dp.end());
    return 0;
}