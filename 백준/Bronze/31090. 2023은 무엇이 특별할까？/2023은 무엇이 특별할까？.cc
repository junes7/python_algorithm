#include <iostream>
using namespace std;
int main(void) {
    int t, n, d;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> d;
        n = d % 100;
        cout << ((d + 1) % n == 0 ? "Good" : "Bye") << "\n";
    }
    return 0;
}