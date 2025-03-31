#include <iostream>
using namespace std;
int main(void) {
    int a, b, val;
    cin >> a >> b;
    val = (a + b) % 12;
    cout << (val == 0 ? 12 : val);
    return 0;
}