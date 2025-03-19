#include <iostream>
using namespace std;
int main(void) {
    int n, p, t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p >> t;
        cout << p - t / 7 + t / 4 << "\n";
    }
    return 0;
}