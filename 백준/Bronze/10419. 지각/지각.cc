#include <iostream>
using namespace std;
int main(void) {
    int t, d, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d;
        t = 0;
        while (true) {
            if (t * (t + 1) > d) break;
            t += 1;
        }
        cout << t - 1 << "\n";
    }
    return 0;
}