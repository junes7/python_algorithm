#include <iostream>
using namespace std;
int main(void) {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << (a + b + c <= 21 ? 1 : 0);
}