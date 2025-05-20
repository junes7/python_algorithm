#include <iostream>
using namespace std;
int main(void) {
    int t, n, d, vi, fi, ci, cnt;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> d;
        cnt = 0;
        for (int j = 0; j < n; j++) {
            cin >> vi >> fi >> ci;
            if (vi * (fi / double(ci)) >= d)
                cnt += 1;
        }
        cout << cnt << "\n";
    }
    return 0;
}