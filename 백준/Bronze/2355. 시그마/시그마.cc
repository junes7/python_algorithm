#include <iostream>
using namespace std;
int main(void) {
    long long a, b, t;
    cin >> a >> b;
    cout << (a + b) * ((a < b ? b - a : a - b) + 1) / 2;
    return 0;
}