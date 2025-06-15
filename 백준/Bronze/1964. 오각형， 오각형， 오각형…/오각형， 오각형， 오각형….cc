#include <iostream>
using namespace std;
int main(void) {
    long long n;
    cin >> n;
    cout << ((n * (n + 1) / 2) * 3 + 1 + n) % 45678;
    return 0;
}