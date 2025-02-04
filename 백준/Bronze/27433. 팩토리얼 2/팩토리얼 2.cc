#include <iostream>
using namespace std;
long long facto(int n) {
    return n < 2 ? 1 : n * facto(n - 1);
}
int main(void) {
    int n;
    cin >> n;
    cout << facto(n);
    return 0;
}