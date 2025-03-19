#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int max_sum_of_stairs(vector<int> stairs, int n) {
    if (n <= 2) return accumulate(stairs.begin(), stairs.end(), 0);
    vector<int> dp(n, 0);
    dp[0] = stairs[0];
    dp[1] = stairs[0] + stairs[1];
    dp[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2]);
    for (int i = 3; i < n; i++)
        dp[i] = max(dp[i - 2], dp[i - 3] + stairs[i - 1]) + stairs[i];
    return dp[dp.size() - 1];
}
int main(void) {
    int n;
    cin >> n;
    vector<int> stairs(n);
    for (int i = 0; i < n; i++)
        cin >> stairs[i];
    cout << max_sum_of_stairs(stairs, n);
    return 0;
}