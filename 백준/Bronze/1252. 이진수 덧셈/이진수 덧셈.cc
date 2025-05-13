#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    int carry = 0, total;
    string a, b, temp = "";
    cin >> a >> b;
    if (a.length() < b.length()) swap(a, b);
    while (a.size() != b.size()) b = '0' + b;
    for (int i = a.size() - 1; i >= 0; i--) {
        total = (a[i] - 48) + (b[i] - 48);
        if (carry + total == 3 or carry + total == 1) {
            temp = '1' + temp;
            carry = carry + total == 3 ? 1 : 0;
        } else if (carry + total == 2 or carry + total == 0) {
            temp = '0' + temp;
            carry = carry + total == 2 ? 1 : 0;
        }
    }
    if (carry == 1) temp = '1' + temp;
    if (temp.find('1') >= 80) {
        temp = "0";
    } else {
        temp.erase(0, temp.find('1'));
    }
    cout << temp << "\n";
    return 0;
}