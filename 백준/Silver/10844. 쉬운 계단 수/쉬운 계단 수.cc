#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, cnt = 0, mod = 1000000000;
    cin >> n;
    vector<vector<int>> dp(n + 1, vector<int>(10, 0));
    for (int j = 1; j < 10; j++)
        dp[1][j] = 1;
    for (int i = 2; i < n + 1; i++) {
        for (int j = 0; j < 10; j++) {
            if (0 < j)
                dp[i][j] += dp[i - 1][j - 1];
            if (j < 9)
                dp[i][j] += dp[i - 1][j + 1];
            dp[i][j] %= mod;
        }
    }
    for (int j = 0; j < 10; j++) {
        cnt += dp[n][j];
        cnt %= mod;
    }
    cout << cnt;
    return 0;
}