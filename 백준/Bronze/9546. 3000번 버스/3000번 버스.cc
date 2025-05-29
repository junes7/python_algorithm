#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << (int)pow(2, n) - 1 << "\n";
    }
    return 0;
}