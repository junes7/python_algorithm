#include <iostream>
using namespace std;
int main(void) {
    int n;
    double m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        cout << fixed;
        cout.precision(2);
        cout << "$" << m * 0.8 << "\n";
    }
    return 0;
}