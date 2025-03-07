#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int n, s = 0, m = 0;
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        s += i;
        m += pow(i, 3);
    }
    cout << s << "\n";
    cout << int(pow(s, 2)) << "\n";
    cout << m;
    return 0;
}