#include <iostream>
using namespace std;
int main(void) {
    int a, b, c;
    cin >> a >> b;
    cin >> c;
    if (a + b >= 2 * c)
        cout << (a + b - 2 * c);
    else
        cout << a + b;
    return 0;
}