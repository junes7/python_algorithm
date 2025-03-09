#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int h, m, s;
    vector<int> T(6);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++)
            cin >> T[j];
        h = T[3] - T[0], m = T[4], s = T[5];
        if (s - T[2] < 0) {
            s = s + 60 - T[2];
            if (m == 0) {
                m += 60;
                h -= 1;
            }
            m -= 1;
        } else {
            s = s - T[2];
        }
        if (m - T[1] < 0) {
            m = m + 60 - T[1];
            h -= 1;
        } else {
            m = m - T[1];
        }
        cout << h << ' ' << m << ' ' << s << "\n";
    }
    return 0;
}