#include <iostream>
using namespace std;
int main(void) {
    int h, l, a, b;
    bool check = false;
    cin >> h >> l >> a >> b;
    if (a <= l && b <= h * 2 || b <= l && a <= h * 2)
        check = true;
    cout << (check ? "YES" : "NO");
    return 0;
}