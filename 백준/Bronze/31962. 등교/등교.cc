#include <iostream>
using namespace std;
int main(void) {
    int n, x, s, t, maxn = -1;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> s >> t;
        if (s + t <= x)
            if (maxn < s)
                maxn = s;
    }
    cout << maxn;
    return 0;
}