#include <iostream>
using namespace std;
int main(void) {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << n * (n + 1) / 2 << ' ' << n * n << ' ' << n * (n + 1) << "\n";
    }
    return 0;
}