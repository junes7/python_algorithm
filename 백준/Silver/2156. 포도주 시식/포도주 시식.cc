#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &wine, vector<int> &memo, int n) {
    int case1, case2, case3;
    if (n == 0)
        return wine[0];
    else if (n == 1)
        return wine[0] + wine[1];
    else if (n == 2)
        return max(solve(wine, memo, 1), max(wine[0], wine[1]) + wine[2]);
    if (memo[n] > -1) return memo[n];
    case1 = solve(wine, memo, n - 1);
    case2 = solve(wine, memo, n - 2) + wine[n];
    case3 = solve(wine, memo, n - 3) + wine[n - 1] + wine[n];
    memo[n] = max(max(case1, case3), max(case2, case3));
    return memo[n];
}
int main(void) {
    int n;
    cin >> n;
    vector<int> wine(n), memo(n, -1);
    for (int i = 0; i < n; i++)
        cin >> wine[i];
    cout << solve(wine, memo, n - 1);
    return 0;
}