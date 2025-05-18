#include <iostream>
using namespace std;
int main(void) {
    int n, m, k;
    long long rlt;
    cin >> n >> m >> k;
    rlt = ((m - 1) + (k - 3) % n + n) % n + 1;
    cout << rlt;
    return 0;
}