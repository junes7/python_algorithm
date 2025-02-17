#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int k;
    cin >> k;
    vector<int> dp(k + 1, 0);
    dp[1] = 1;
    for (int i = 2; i < k + 1; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[k - 1] << ' ' << dp[k];
    return 0;
}