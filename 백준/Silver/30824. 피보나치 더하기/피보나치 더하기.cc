#include <iostream>
#include <vector>
using namespace std;
bool solve(vector<long long> &f, int k, long long x) {
    if (k == 1) {
        for (int i = 1; i < 79; i++)
            if (f[i] == x) return true;
    } else if (k == 2) {
        for (int i = 1; i < 79; i++) {
            for (int j = 1; j < 79; j++)
                if (f[i] + f[j] == x) return true;
        }
    } else {
        for (int i = 1; i < 79; i++) {
            for (int j = 1; j < 79; j++) {
                for (int k = 1; k < 79; k++)
                    if (f[i] + f[j] + f[k] == x) return true;
            }
        }
    }
    return false;
}
int main(void) {
    int t, k;
    long long x;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    vector<long long> f(79);
    f[0] = 0, f[1] = 1;
    for (int i = 2; i < 79; i++)
        f[i] = f[i - 1] + f[i - 2];
    for (int i = 0; i < t; i++) {
        cin >> k >> x;
        cout << (solve(f, k, x) ? "YES" : "NO") << "\n";
    }
    return 0;
}