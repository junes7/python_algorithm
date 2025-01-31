#include <iostream>
#include <vector>
using namespace std;
int fibo(vector<int> &memo, int n) {
    if (n < 2)
        return n;
    if (memo[n])
        return memo[n];
    memo[n] = fibo(memo, n - 1) + fibo(memo, n - 2);
    return memo[n];
}
int main(void) {
    int n;
    cin >> n;
    vector<int> memo;
    for (int i = 0; i < n + 1; i++)
        memo.push_back(0);
    cout << fibo(memo, n);
    return 0;
}