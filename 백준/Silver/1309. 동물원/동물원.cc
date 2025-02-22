#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, mod = 9901;
    cin >> n;
    vector<vector<int>> dp(n, vector<int>(3, 1));
    for (int i = 1; i < n; i++) {
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % mod;
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % mod;
        dp[i][2] = (dp[i - 1][0] + dp[i - 1][1]) % mod;
    }
    cout << (dp[n - 1][0] + dp[n - 1][1] + dp[n - 1][2]) % mod;
    return 0;
}