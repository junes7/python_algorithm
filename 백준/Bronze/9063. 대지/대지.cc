#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, x, y;
    vector<int> ptx, pty;
    cin >> n;
    if (n == 1)
        cout << 0;
    else {
        for (int i = 0; i < n; i++) {
            cin >> x >> y;
            ptx.push_back(x);
            pty.push_back(y);
        }
        cout << (*max_element(ptx.begin(), ptx.end()) - *min_element(ptx.begin(), ptx.end())) * (*max_element(pty.begin(), pty.end()) - *min_element(pty.begin(), pty.end()));
    }
    return 0;
}