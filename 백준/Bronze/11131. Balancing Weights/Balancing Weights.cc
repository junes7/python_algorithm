#include <iostream>
using namespace std;
int main(void) {
    int t, n, elem, s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        s = 0;
        for (int j = 0; j < n; j++) {
            cin >> elem;
            s += elem;
        }
        cout << (s > 0 ? "Right" : (s < 0 ? "Left" : "Equilibrium")) << "\n";
    }
    return 0;
}