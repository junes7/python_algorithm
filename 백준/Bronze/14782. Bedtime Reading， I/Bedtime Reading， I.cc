#include <iostream>
using namespace std;
int main(void) {
    int n, s = 0;
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        if (n % i == 0)
            s += i;
    }
    cout << s;
    return 0;
}