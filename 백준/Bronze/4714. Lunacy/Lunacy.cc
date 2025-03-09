#include <iostream>
using namespace std;
int main(void) {
    double x;
    while (cin >> x) {
        if (x == -1.0) break;
        cout << fixed;
        cout.precision(2);
        cout << "Objects weighing " << x << " on Earth will weigh " << x * 0.167 << " on the moon.\n";
    }
    return 0;
}