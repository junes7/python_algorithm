#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int a = 1, b = 1, n, t;
    cin >> n;
    for (int i = 2; i < n + 1; i++) {
        t = a;
        a = b;
        b = (t + b) % 15746;
    }
    cout << b;
    return 0;
}