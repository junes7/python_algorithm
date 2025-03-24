#include <iostream>
using namespace std;
int main(void) {
    int n, s = 0;
    while (cin >> n) {
        if (n == -1) break;
        s += n;
    }
    cout << s;
    return 0;
}