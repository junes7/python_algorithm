#include <iostream>
using namespace std;
int main(void) {
    int n, t;
    cin >> n;
    t = 7 * (n);
    cout << 2024 + t / 12 << ' ' << 1 + t % 12;
    return 0;
}