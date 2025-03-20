#include <iostream>
using namespace std;
int main(void) {
    int n, s = 0;
    string st;
    cin >> n;
    cin >> st;
    for (int i = 0; i < n; i++) {
        if (st[i] == 'j' || st[i] == 'i')
            s += 2;
        else
            s += 1;
    }
    cout << s;
    return 0;
}