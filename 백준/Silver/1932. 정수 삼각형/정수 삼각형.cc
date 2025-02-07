#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int max_path_length(int n, vector<vector<int>> &triangle) {
    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[0][0] = triangle[0][0];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (j == 0)
                dp[i][j] = dp[i - 1][j] + triangle[i][0];
            else if (j == i)
                dp[i][j] = dp[i - 1][j - 1] + triangle[i][i];
            else
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];
        }
    }
    return *max_element(dp[n - 1].begin(), dp[n - 1].end());
}
int main(void) {
    int n;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    vector<vector<int>> triangle(n, vector<int>(n, 0));
    for (int i = 1; i < n + 1; i++) {
        for (int j = 0; j < i; j++)
            cin >> triangle[i - 1][j];
    }
    cout << max_path_length(n, triangle);
    return 0;
}