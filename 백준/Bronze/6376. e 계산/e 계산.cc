#include <iostream>
#include <vector>
using namespace std;
int facto(int n) {
    return n > 1 ? n * facto(n - 1) : 1;
}
int main(void) {
    double s;
    cout << "n e\n";
    cout << "- -----------\n";
    for (int i = 1; i < 11; i++) {
        s = 0;
        for (int j = 0; j < i; j++)
            s += 1 % facto(j) == 0 ? int(1 / facto(j)) : 1.0 / facto(j);
        cout << fixed;
        if (i - 1 < 2) {
            cout.precision(0);
            cout << i - 1 << ' ' << s << "\n";
        } else if (i - 1 == 2) {
            cout.precision(1);
            cout << i - 1 << ' ' << s << "\n";
        } else {
            cout.precision(9);
            cout << i - 1 << ' ' << s << "\n";
        }
    }
    return 0;
}