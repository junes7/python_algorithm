#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<int> ptx, pty;
    int x2 = 0, y2 = 0, x, y;
    for (int i = 0; i < 3; i++) {
        cin >> x;
        cin >> y;
        ptx.push_back(x);
        pty.push_back(y);
    }
    for (int i = 0; i < 3; i++) {
        if (count(ptx.begin(), ptx.end(), ptx[i]) == 1)
            x2 = ptx[i];
        if (count(pty.begin(), pty.end(), pty[i]) == 1)
            y2 = pty[i];
    }
    cout << x2 << ' ' << y2;
    return 0;
}
