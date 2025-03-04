#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, k;
    long long s = 0;
    cin >> n >> k;
    vector<long long> datas(n), dp(n, 0);
    for (int i = 0; i < n; i++)
        cin >> datas[i];
    dp[0] = datas[0];
    for (int i = 1; i < n; i++)
        dp[i] = dp[i - 1] + datas[i];
    sort(dp.begin(), dp.end(), greater<long long>());
    for (int i = 0; i < k; i++)
        s += dp[i];
    cout << s;
    return 0;
}