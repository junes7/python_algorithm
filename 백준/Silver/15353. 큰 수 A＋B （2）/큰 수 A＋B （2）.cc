#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    int carry = 0, idx, t;
    string a, b, rlt = "";
    cin >> a >> b;
    if (a.size() < b.size()) swap(a, b);
    while (a.size() != b.size()) b = '0' + b;
    for (int i = a.size() - 1; i >= 0; i--) {
        t = a[i] - 48 + b[i] - 48 + carry;
        rlt = to_string(t % 10) + rlt;
        carry = t / 10;
    }
    if (carry > 0)
        rlt = to_string(carry) + rlt;
    for (int i = 0; i < rlt.size(); i++) {
        if (rlt[i] != '0') {
            idx = i;
            break;
        }
    }
    if (idx >= rlt.size())
        rlt = "0";
    else
        rlt.erase(0, idx);
    cout << rlt;
    return 0;
}