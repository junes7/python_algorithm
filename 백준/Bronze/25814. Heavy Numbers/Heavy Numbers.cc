#include <iostream>
using namespace std;
int main(void) {
    string a, b;
    int sa = 0, sb = 0;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
        sa += a[i] - 48;
    for (int i = 0; i < b.size(); i++)
        sb += b[i] - 48;
    sa *= a.size(), sb *= b.size();
    cout << (sa == sb ? 0 : (sa > sb ? 1 : 2));
    return 0;
}