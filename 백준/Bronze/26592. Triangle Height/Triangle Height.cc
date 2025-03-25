#include <iostream>
using namespace std;
int main(void) {
    int n;
    double a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << fixed;
        cout.precision(2);
        cout << "The height of the triangle is " << 2 * a / b << " units" << "\n";
    }
    return 0;
}