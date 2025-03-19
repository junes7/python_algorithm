#include <iostream>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    cout << fixed;
    cout.precision(10);
    cout << (100.0 - n) / n + 1 << "\n";
    cout << n / (100.0 - n) + 1;
    return 0;
}