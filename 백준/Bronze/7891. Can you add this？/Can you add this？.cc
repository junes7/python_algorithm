#include <iostream>
using namespace std;
int main(void) {
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        cout << x + y << "\n";
    }
    return 0;
}