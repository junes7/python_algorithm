#include <iostream>
using namespace std;
int main(void) {
    int a, b;
    cin >> a;
    cin >> b;
    if (a == b)
        cout << 0;
    else
        cout << (a < b ? -1 : 1);
    return 0;
}