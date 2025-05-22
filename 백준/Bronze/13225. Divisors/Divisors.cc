#include <iostream>
using namespace std;
int main(void) {
    int t, n, cnt;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cnt = 0;
        for (int j = 1; j < n + 1; j++) {
            if (n % j == 0)
                cnt += 1;
        }
        cout << n << ' ' << cnt << "\n";
    }
    return 0;
}