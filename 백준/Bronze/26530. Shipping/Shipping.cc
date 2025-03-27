#include <iostream>
using namespace std;
int main(void) {
    int n, x, quan;
    string name;
    double unit, total;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        total = 0.0;
        for (int j = 0; j < x; j++) {
            cin >> name >> quan >> unit;
            total += quan * unit;
        }
        cout << fixed;
        cout.precision(2);
        cout << "$" << total << "\n";
    }
    return 0;
}