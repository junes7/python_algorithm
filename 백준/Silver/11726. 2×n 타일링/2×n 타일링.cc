#include <iostream>
#include <vector>
using namespace std;
int F(vector<int> &memo, int n) {
    int mod = 10007;
    if (n <= 2) return n;
    if (memo[n] > 0) return memo[n];
    memo[n] = F(memo, n - 1) + F(memo, n - 2);
    memo[n] %= mod;
    return memo[n];
}
int main(void) {
    int n;
    cin >> n;
    vector<int> memo(n + 1, 0);
    cout << F(memo, n);
    return 0;
}