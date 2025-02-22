#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    long remain;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<long> stone(n + 1, 0), dp(n + 1, 0);
    for (int i = 1; i < n + 1; i++)
        cin >> stone[i];
    for (int i = 1; i < n + 1; i++) {
        remain = stone[i];
        dp[i] = max(dp[i], dp[i - 1]);
        for (int j = i + 1; j < n + 1; j++) {
            remain = stone[j] - remain;
            if (remain < 0)
                break;
            else if (remain == 0) {
                dp[j] = max(dp[j], dp[i - 1] + 1);
                break;
            }
        }
    }
    cout << n - dp[dp.size() - 1];
    return 0;
}