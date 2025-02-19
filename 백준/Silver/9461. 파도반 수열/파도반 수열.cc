#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, t;
    vector<long> dp = {0, 1, 1, 1, 2, 2};
    for (int i = 6; i < 101; i++)
        dp.push_back(dp[i - 1] + dp[i - 5]);
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << dp[n] << "\n";
    }
    return 0;
}