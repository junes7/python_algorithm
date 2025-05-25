#include <iostream>
using namespace std;
int main(void) {
    int t, carry;
    string a, b, rlt;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        carry = 0;
        rlt = "";
        if (a.size() < b.size()) swap(a, b);
        while (a.size() != b.size()) b = '0' + b;
        for (int i = a.size() - 1; i >= 0; i--) {
            rlt = to_string((carry + a[i] - 48 + b[i] - 48) % 2) + rlt;
            carry = (carry + a[i] - 48 + b[i] - 48) / 2;
        }
        if (carry == 1)
            rlt = '1' + rlt;
        if (rlt.find('1') >= 80) {
            rlt = "0";
        } else {
            rlt.erase(0, rlt.find('1'));
        }
        cout << rlt << "\n";
    }
    return 0;
}