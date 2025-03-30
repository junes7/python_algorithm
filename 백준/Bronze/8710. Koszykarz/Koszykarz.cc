#include <iostream>
using namespace std;
int main(void) {
    int k, w, m, diff;
    cin >> k >> w >> m;
    diff = w - k;
    cout << (diff / m + (diff % m == 0 ? 0 : 1));
    return 0;
}