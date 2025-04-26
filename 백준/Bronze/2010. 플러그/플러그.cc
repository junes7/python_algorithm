#include <iostream>
using namespace std;
int main(void) {
    int n, t, cnt = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        cnt += t - 1;
    }
    cout << cnt;
    return 0;
}