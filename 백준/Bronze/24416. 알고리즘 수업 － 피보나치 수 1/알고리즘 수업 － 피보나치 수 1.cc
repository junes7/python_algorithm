#include <iostream>
#include <vector>
using namespace std;
int fibo(int n) {
    vector<int> f(n + 1, 0);
    f[1] = 1, f[2] = 1;
    for (int i = 3; i < n + 1; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}
int fibonacci(int n) {
    return n - 2;
}
int main(void) {
    int n;
    cin >> n;
    cout << fibo(n) << ' ' << fibonacci(n) << "\n";
    return 0;
}