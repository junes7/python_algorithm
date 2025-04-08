#include <iostream>
using namespace std;
int main(void) {
    int k, n, s, d, di, vi, total;
    cin >> k;
    for (int i = 1; i < k + 1; i++) {
        cin >> n >> s >> d;
        total = 0;
        for (int j = 0; j < n; j++) {
            cin >> di >> vi;
            if (di / s + (di % s == 0 ? 0 : 1) <= d)
                total += vi;
        }
        cout << "Data Set " << i << ":\n";
        cout << total << "\n\n";
    }
    return 0;
}