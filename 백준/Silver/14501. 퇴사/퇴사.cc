#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &ti, vector<int> &pi, vector<int> &memo, int n, int day) {
    int case1, case2;
    if (n <= day) return 0;
    if (memo[day]) return memo[day];
    case1 = solve(ti, pi, memo, n, day + 1), case2 = 0;
    if (day + ti[day] <= n)
        case2 = solve(ti, pi, memo, n, day + ti[day]) + pi[day];
    memo[day] = max(case1, case2);
    return memo[day];
}
int main(void) {
    int n;
    cin >> n;
    vector<int> ti(n), pi(n), memo(n + 1, 0);
    for (int i = 0; i < n; i++)
        cin >> ti[i] >> pi[i];
    cout << solve(ti, pi, memo, n, 0);
    return 0;
}