#include <iostream>
using namespace std;
int main(void) {
    long long a, b;
    cin >> a >> b;
    if (a % 2 == 1 && b % 2 == 1)
        cout << min(a, b);
    else
        cout << 0;
    return 0;
}