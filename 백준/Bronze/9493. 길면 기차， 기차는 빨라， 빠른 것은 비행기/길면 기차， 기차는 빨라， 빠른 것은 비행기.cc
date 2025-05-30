#include <cmath>
#include <iostream>
using namespace std;
string zfill(string s, int len) {
    return string(len - s.size(), '0') + s;
}
int main(void) {
    int d, a, b, t, h, m, s;
    while (1) {
        cin >> d >> a >> b;
        if (d == a && a == b && b == 0) break;
        t = round((d / (double)a - d / (double)b) * 3600);
        h = t / 3600;
        m = (t % 3600) / 60;
        s = (t % 3600) % 60;
        cout << h << ":" << zfill(to_string(m), 2) << ":" << zfill(to_string(s), 2) << "\n";
    }
    return 0;
}