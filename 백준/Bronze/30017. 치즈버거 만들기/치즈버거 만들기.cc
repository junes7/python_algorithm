#include <iostream>
using namespace std;
int main(void) {
    int a, b, c = 3;
    cin >> a >> b;
    c += min(a - 2, b - 1) * 2;
    cout << c;
    return 0;
}