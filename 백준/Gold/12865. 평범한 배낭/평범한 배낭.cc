#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &W, vector<int> &V, vector<vector<int>> &memo, int n, int k) {
    int case1, case2, prev_k;
    if (n < 0) return 0;
    if (memo[n][k] != -1) return memo[n][k];
    case1 = 0;
    prev_k = k - W[n];
    if (0 <= prev_k)
        case1 = solve(W, V, memo, n - 1, prev_k) + V[n];
    case2 = solve(W, V, memo, n - 1, k);
    memo[n][k] = max(case1, case2);
    return memo[n][k];
}
int main(void) {
    int n, k;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    vector<int> W(n), V(n);
    vector<vector<int>> memo(n, vector<int>(k + 1, -1));
    for (int i = 0; i < n; i++)
        cin >> W[i] >> V[i];
    cout << solve(W, V, memo, n - 1, k);
}