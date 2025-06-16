#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
bool isprime(int n) {
    if (n == 1)
        return false;
    for (int i = 2; i < int(sqrt(n)) + 1; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main(void) {
    int n;
    string st, t = "";
    cin >> n;
    while (1) {
        st = to_string(n);
        t = st;
        reverse(st.begin(), st.end());
        if (t == st && isprime(n)) {
            cout << n;
            break;
        }
        n += 1;
    }
    return 0;
}