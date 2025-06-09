#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> dp = {0, 1, 2, 4};
        if (n >= 4) {
            for (int i = 4; i < n + 1; i++) {
                dp.push_back(dp[i - 1] + dp[i - 2] + dp[i - 3]);
            }
        }
        cout << dp[n] << "\n";
    }
    return 0;
}