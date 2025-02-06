#include <iostream>
#include <vector>
using namespace std;
long long fibo(long long n) {
    int mod = 1000000;
    int p = mod / 10 * 15;
    vector<int> fib(p, 0);
    fib[1] = 1;
    for (int i = 2; i < p; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        fib[i] %= mod;
    }
    return fib[n % p];
}
int main(void) {
    long long n;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    cout << fibo(n);
    return 0;
}