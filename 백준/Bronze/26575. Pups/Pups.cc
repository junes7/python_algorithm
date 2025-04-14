#include <iostream>
using namespace std;
int main(void) {
    int n;
    double d, f, p;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d >> f >> p;
        cout << fixed;
        cout.precision(2);
        cout << "$" << d * f * p << "\n";
    }
    return 0;
}