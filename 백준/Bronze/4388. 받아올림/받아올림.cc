#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    string a, b;
    int carry, cnt;
    while (1) {
        cin >> a >> b;
        carry = 0, cnt = 0;
        if (a == "0" && b == "0") break;
        if (a.size() < b.size()) swap(a, b);
        while (a.size() != b.size()) b = "0" + b;
        for (int i = a.size() - 1; i >= 0; i--) {
            carry = (carry + (a[i] - 48) + (b[i] - 48)) / 10;
            if (carry > 0) cnt += 1;
        }
        cout << cnt << "\n";
    }
    return 0;
}