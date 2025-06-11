#include <iostream>
using namespace std;
int main(void) {
    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << (a == b && b == 1 ? 50 : 1) << "\n";
    }
    return 0;
}