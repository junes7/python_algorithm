#include <iostream>
using namespace std;
int main(void) {
    int n, m, pack, each, min_p = 1000, min_e = 1000;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> pack >> each;
        if (min_p > pack) min_p = pack;
        if (min_e > each) min_e = each;
    }
    if (min_p >= min_e * 6)
        cout << min_e * n;
    else
        cout << min_p * (n / 6) + (min_p < min_e * (n % 6) ? min_p : min_e * (n % 6));
    return 0;
}