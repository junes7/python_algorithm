#include <iostream>
using namespace std;
int main(void) {
    int a, d, k;
    double n;
    cin >> a >> d >> k;
    n = (k - a + d) / double(d);
    if (n == int(n) && n > 0)
        cout << int(n);
    else
        cout << "X";
    return 0;
}