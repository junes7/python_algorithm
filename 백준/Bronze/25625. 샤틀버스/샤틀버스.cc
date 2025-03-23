#include <iostream>
using namespace std;
int main(void) {
    int x, y;
    cin >> x >> y;
    if (x > y)
        cout << y + x;
    else
        cout << y - x;
    return 0;
}