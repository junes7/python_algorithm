#include <iostream>
using namespace std;
int main(void) {
    int n, a, d, g, s = 0, t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> d >> g;
        t = (a * (d + g)) * (a == d + g ? 2 : 1);
        if (s < t)
            s = t;
    }
    cout << s;
    return 0;
}