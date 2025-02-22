#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, remain;
    cin >> n;
    vector<int> stone(n), dp(n, 0);
    for (int i = 0; i < n; i++)
        cin >> stone[i];
    for (int i = 0; i < n; i++) {
        remain = stone[i];
        if (i > 0 && i < n)
            dp[i] = max(dp[i], dp[i - 1]);
        for (int j = i + 1; j < n; j++) {
            remain = stone[j] - remain;
            if (remain < 0) break;
            if (remain == 0)
                dp[j] = min(dp[j], dp[i - 1]) + 1;
        }
    }
    cout << n - dp[dp.size() - 1];
    return 0;
}