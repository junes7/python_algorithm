#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n;
    vector<long long> f(46, 0), rlt;
    cin >> t;
    f[1] = 1;
    for (int i = 2; i < 46; i++)
        f[i] = f[i - 1] + f[i - 2];
    for (int i = 0; i < t; i++) {
        cin >> n;
        rlt = {};
        for (int i = 45; i >= 0; i--) {
            if (f[i] <= n) {
                rlt.push_back(f[i]);
                n -= f[i];
            }
            if (n == 0) {
                sort(rlt.begin(), rlt.end(), less<int>());
                for (int i = 0; i < rlt.size(); i++)
                    cout << rlt[i] << ' ';
                cout << "\n";
                break;
            }
        }
    }
    return 0;
}