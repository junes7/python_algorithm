#include <iostream>
using namespace std;
int main(void) {
    int a, b;
    long long rlt = 1;
    cin >> a >> b;
    for (int i = a; i < b + 1; i++) {
        rlt *= i * (i + 1) / 2;
        rlt %= 14579;
    }
    cout << rlt;
    return 0;
}