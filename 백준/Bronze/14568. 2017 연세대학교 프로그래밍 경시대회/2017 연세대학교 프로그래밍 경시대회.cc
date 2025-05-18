#include <iostream>
using namespace std;
int main(void) {
    int n, s = 0;
    cin >> n;
    for (int i = 2; i < n - 1; i = i + 2) {
        s += (n - i - 2) / 2;
    }
    cout << s;
    return 0;
}