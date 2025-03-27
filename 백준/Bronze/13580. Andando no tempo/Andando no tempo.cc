#include <iostream>
using namespace std;
int main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b || a == c || b == c)
        cout << "S";
    else if (a + b == c || a + c == b || b + c == a)
        cout << "S";
    else
        cout << "N";
    return 0;
}