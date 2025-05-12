#include <iostream>
using namespace std;
int main(void) {
    int n, m, k, teams = 0;
    cin >> n >> m >> k;
    while (true) {
        n -= 2;
        m -= 1;
        if (n < 0 || m < 0 || n + m < k) break;
        teams += 1;
    }
    cout << teams;
    return 0;
}