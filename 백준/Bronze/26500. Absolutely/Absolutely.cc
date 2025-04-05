#include <iostream>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    double a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << fixed;
        cout.precision(1);
        cout << abs(a - b) << "\n";
    }
    return 0;
}