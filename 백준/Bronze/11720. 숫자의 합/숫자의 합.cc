#include <iostream>
using namespace std;

int main(void) {
    int n, s = 0;
    cin >> n;
    char t[n];
    cin >> t;
    for (int i = 0; i < sizeof(t); i++) {
        s += t[i] - 48;
    }
    cout << s << endl;
    return 0;
}