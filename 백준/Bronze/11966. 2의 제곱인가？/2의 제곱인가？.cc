#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int n, idx = -1;
    cin >> n;
    for (int i = 0; i < 31; i++) {
        if (pow(2, i) == n) {
            idx = i;
            break;
        }
    }
    cout << (idx == -1 ? 0 : 1);
    return 0;
}