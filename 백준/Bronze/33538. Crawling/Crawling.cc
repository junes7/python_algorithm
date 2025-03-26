#include <iostream>
using namespace std;
int main(void) {
    int l, n, cnt = 0;
    double t, ft, bt;
    cin >> l;
    cin >> n;
    cin >> t;
    for (int i = 0; i < n; i++) {
        cin >> ft >> bt;
        if (l / ft + l / bt < t)
            cnt += 1;
    }
    cout << (cnt > 0 ? "HOPE" : "DOOMED");
    return 0;
}