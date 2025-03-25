#include <iostream>
using namespace std;
int main(void) {
    int p, q, a, b;
    cin >> p >> q;
    cin >> a >> b;
    cout << (p < q ? p * a + (q - p) * b : q * a);
    return 0;
}