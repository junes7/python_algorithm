#include <iostream>
using namespace std;
long long facto(int n) {
    return n <= 1 ? 1 : n * facto(n - 1);
}
int main(void) {
    int n;
    cin >> n;
    cout << facto(n) / (60 * 60 * 24 * 7);
    return 0;
}