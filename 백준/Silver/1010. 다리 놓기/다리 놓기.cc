#include <iostream>
using namespace std;
int main(void) {
    int t, n, m;
    long long bridge, k;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        bridge = 1, k = 1;
        for (int j = m; j > m - n; j--) {
            bridge *= j;
            bridge /= k++;
        }
        cout << bridge << "\n";
    }
    return 0;
}