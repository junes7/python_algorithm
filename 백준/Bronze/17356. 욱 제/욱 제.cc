#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int A, B;
    double M;
    cin >> A >> B;
    M = (B - A) / 400.0;
    cout.unsetf(ios::fixed);
    cout << (1 / (1 + pow(10, M)));
    return 0;
}