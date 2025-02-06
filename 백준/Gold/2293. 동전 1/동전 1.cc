#include <iostream>
#include <vector>
using namespace std;
int coin_count_cases(int n, int k, vector<int> &coins) {
    vector<int> dp(k + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = coins[i]; j < k + 1; j++) {
            dp[j] += dp[j - coins[i]];
        }
    }
    return dp[k];
}
int main(void) {
    int n, k;
    cin >> n >> k;
    vector<int> coins(n, 0);
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    cout << coin_count_cases(n, k, coins);
    return 0;
}