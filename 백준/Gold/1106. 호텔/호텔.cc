#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &cost, vector<int> &customer, vector<vector<int>> &dp, int n, int c) {
    int case1, case2;
    if (n < 0) return 987654321;
    if (c <= 0) return 0;
    if (dp[n][c]) return dp[n][c];
    case1 = solve(cost, customer, dp, n - 1, c);
    case2 = solve(cost, customer, dp, n, c - customer[n]) + cost[n];
    dp[n][c] = min(case1, case2);
    return dp[n][c];
}
int main(void) {
    int c, n;
    cin >> c >> n;
    vector<int> cost(n), customer(n);
    vector<vector<int>> dp(n, vector<int>(c + 1, 0));
    for (int i = 0; i < n; i++)
        cin >> cost[i] >> customer[i];
    cout << solve(cost, customer, dp, n - 1, c);
    return 0;
}