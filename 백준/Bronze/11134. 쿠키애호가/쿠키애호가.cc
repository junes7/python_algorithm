#include <iostream>
using namespace std;
int main(void) {
    int t, n, c;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> c;
        cout << n / c + (n % c == 0 ? 0 : 1) << "\n";
    }
    return 0;
}