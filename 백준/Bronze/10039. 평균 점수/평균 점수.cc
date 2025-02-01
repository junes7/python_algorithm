#include <iostream>
using namespace std;
int main(void) {
    int n, s = 0;
    for (int i = 0; i < 5; i++) {
        cin >> n;
        if (n < 40) n = 40;
        s += n;
    }
    cout << s / 5;
    return 0;
}