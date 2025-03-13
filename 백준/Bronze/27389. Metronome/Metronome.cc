#include <iostream>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    cout << fixed;
    if (n / 4 == n / 4.0)
        cout.precision(1);
    else
        cout.precision(2);
    cout << n / 4.0;
    return 0;
}