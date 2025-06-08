#include <iostream>
using namespace std;
int main(void) {
    int n, total = 0, end = 0, cnt = 0;
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        while (total < n && end < n) {
            total += end + 1;
            end += 1;
        }
        if (total == n) cnt += 1;
        total -= i;
    }
    cout << cnt;
    return 0;
}