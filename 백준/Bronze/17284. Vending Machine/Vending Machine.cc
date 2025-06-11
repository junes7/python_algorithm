#include <iostream>
using namespace std;
int main(void) {
    int n, m = 5000;
    while (cin >> n) {
        m -= (n == 1 ? 500 : (n == 2 ? 800 : 1000));
    }
    cout << m;
    return 0;
}