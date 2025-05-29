#include <iostream>
using namespace std;
int main(void) {
    int t, n;
    long long s, elem;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        s = 0;
        for (int j = 0; j < n; j++) {
            cin >> elem;
            s = (s + elem) % n;
        }
        cout << (s % n == 0 ? "YES" : "NO") << "\n";
    }
    return 0;
}