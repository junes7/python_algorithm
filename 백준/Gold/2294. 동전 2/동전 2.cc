#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, k, prev_k, maxn = 987654321;
    long case1, case2;
    cin >> n >> k;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    vector<vector<int>> memo(n, vector<int>(k + 1, maxn));
    for (int i = 0; i < n; i++) {
        memo[i][0] = 0;
        for (int j = 1; j < k + 1; j++) {
            case1 = maxn, case2 = maxn, prev_k = j - coins[i];
            if (0 <= prev_k) case1 = memo[i][prev_k] + 1;
            if (i > 0) case2 = memo[i - 1][j];
            memo[i][j] = min(case1, case2);
        }
    }
    cout << (memo[n - 1][k] == maxn ? -1 : memo[n - 1][k]);
    return 0;
}