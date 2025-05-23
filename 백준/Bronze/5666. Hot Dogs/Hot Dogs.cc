#include <iostream>
using namespace std;
int main(void) {
    int h, p;
    while (cin >> h >> p) {
        cout << fixed;
        cout.precision(2);
        cout << double(h) / p << "\n";
    }
    return 0;
}