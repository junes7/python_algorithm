#include <iostream>
using namespace std;
int main(void) {
    int n, x, elem, s = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        s += elem;
    }
    cout << (s % x == 0 ? 1 : 0);
    return 0;
}