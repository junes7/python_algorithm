#include <iostream>
using namespace std;
int main(void) {
    int n, h, b, k, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> h >> b >> k;
        if (b > h)
            s += (b - h) * k;
    }
    cout << s;
    return 0;
}