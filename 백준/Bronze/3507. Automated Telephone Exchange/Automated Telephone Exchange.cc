#include <iostream>
using namespace std;
int main(void) {
    int n, m;
    cin >> n;
    m = 200 - n - 1;
    cout << (m < 0 ? 0 : m);
    return 0;
}