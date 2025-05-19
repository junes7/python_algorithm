#include <iostream>
using namespace std;
int main(void) {
    long long n, cnt = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while (n > 1) {
        n = n % 2 == 0 ? n / 2 : n + 1;
        cnt += 1;
    }
    cout << cnt;
    return 0;
}