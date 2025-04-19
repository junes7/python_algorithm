#include <iostream>
using namespace std;
int main(void) {
    int n, ans, x;
    while (true) {
        cin >> n;
        ans = 0;
        if (n == 0) break;
        while (n--) {
            cin >> x;
            if (ans + x < 301)
                ans += x;
        }
        cout << ans << "\n";
    }
    return 0;
}