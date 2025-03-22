#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    long long a;
    cin >> a;
    cout << fixed;
    cout.precision(6);
    cout << pow(a, 0.5) * 4;
    return 0;
}