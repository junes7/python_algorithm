#include <iostream>
using namespace std;
int main(void) {
    long long a, b;
    cin >> a >> b;
    cout << (a < b ? a + 1 : b);
    return 0;
}