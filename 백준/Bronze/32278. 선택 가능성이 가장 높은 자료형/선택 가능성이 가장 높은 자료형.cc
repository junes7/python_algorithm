#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    long long n;
    cin >> n;
    if (-pow(2, 15) <= n && n < pow(2, 15)) {
        cout << "short";
    } else if (-pow(2, 31) <= n && n < pow(2, 31)) {
        cout << "int";
    } else {
        cout << "long long";
    }
    return 0;
}