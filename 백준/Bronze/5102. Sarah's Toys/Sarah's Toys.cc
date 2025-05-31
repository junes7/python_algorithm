#include <iostream>
using namespace std;
int main(void) {
    int a, b, t;
    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        t = a - b;
        if (t > 3)
            cout << t / 2 - t % 2 << ' ' << t % 2 << "\n";
        else
            cout << (t == 2 ? 1 : 0) << ' ' << (t == 3 ? 1 : 0) << "\n";
    }
    return 0;
}