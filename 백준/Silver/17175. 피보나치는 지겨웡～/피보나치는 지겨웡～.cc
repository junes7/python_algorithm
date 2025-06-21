#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> f(n + 1, 0);
    f[0] = 1, f[1] = 1;
    for (int i = 2; i < n + 1; i++)
        f[i] = (f[i - 1] + f[i - 2] + 1) % 1000000007;
    cout << f[n];
    return 0;
}