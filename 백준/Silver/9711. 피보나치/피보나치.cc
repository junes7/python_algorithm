#include <iostream>
#include <vector>
using namespace std;
long long fibo(int p, int q) {
    if (p == 1 && p == q) return p % q;
    vector<long long> f(p + 1, 0);
    f[0] = 0, f[1] = 1;
    for (int i = 2; i < p + 1; i++) {
        f[i] = (f[i - 1] + f[i - 2]) % q;
    }
    return f[p];
}
int main(void) {
    int t, p, q;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> p >> q;
        cout << "Case #" << i + 1 << ": " << fibo(p, q) << "\n";
    }
    return 0;
}