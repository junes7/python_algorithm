#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<vector<int>> arr(2, vector<int>(n, 0));
        vector<vector<int>> dp(3, vector<int>(n + 1, 0));
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < n; k++)
                cin >> arr[j][k];
        }
        for (int j = 1; j < n + 1; j++) {
            dp[0][j] = max(max(dp[0][j - 1], dp[2][j - 1]), max(dp[1][j - 1], dp[2][j - 1]));
            dp[1][j] = max(dp[0][j - 1], dp[2][j - 1]) + arr[0][j - 1];
            dp[2][j] = max(dp[0][j - 1], dp[1][j - 1]) + arr[1][j - 1];
        }
        cout << max(max(dp[0][n], dp[2][n]), max(dp[1][n], dp[2][n])) << "\n";
    }
    return 0;
}