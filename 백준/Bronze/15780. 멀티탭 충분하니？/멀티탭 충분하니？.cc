#include <iostream>
using namespace std;
int main(void) {
    int n, k, cnt = 0, elem;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        cin >> elem;
        cnt += (elem + 1) / 2;
    }
    cout << (cnt >= n ? "YES" : "NO");
    return 0;
}