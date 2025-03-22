#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    cin >> st;
    for (int i = 0; i < n; i++) {
        if (st[i] == 'I')
            st[i] = 'i';
        else if (st[i] == 'l')
            st[i] = 'L';
    }
    cout << st;
    return 0;
}