#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int x;
    cin >> x;
    vector<int> dp(x + 1, 0);
    for (int i = 2; i < x + 1; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i % 3 == 0)
            dp[i] = min(dp[i], dp[i / 3] + 1);
        if (i % 2 == 0)
            dp[i] = min(dp[i], dp[i / 2] + 1);
    }
    cout << dp[x];
    return 0;
}