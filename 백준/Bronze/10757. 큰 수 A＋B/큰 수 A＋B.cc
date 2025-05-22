#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int carry = 0;
    string a, b, rlt = "";
    cin >> a >> b;
    if (a.size() < b.size()) swap(a, b);
    while (a.size() != b.size()) b = '0' + b;
    for (int i = a.size() - 1; i >= 0; i--) {
        rlt = to_string((carry + a[i] - 48 + b[i] - 48) % 10) + rlt;
        carry = (carry + a[i] - 48 + b[i] - 48) / 10;
    }
    if (carry > 0) rlt = to_string(carry) + rlt;
    cout << rlt << "\n";
    return 0;
}