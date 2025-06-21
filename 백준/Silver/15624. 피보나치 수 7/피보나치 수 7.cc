#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> f(n + 1);
    f[0] = 0, f[1] = 1;
    for (int i = 2; i < n + 1; i++)
        f[i] = (f[i - 1] + f[i - 2]) % 1000000007;
    cout << f[n];
    return 0;
}