#include <iostream>
using namespace std;
int main(void) {
    unsigned long long n, k = 64;
    cin >> n;
    while (n % 2 == 0) {
        n /= 2;
        k -= 1;
    }
    cout << k;
    return 0;
}