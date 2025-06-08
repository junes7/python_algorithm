#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    string n, t;
    cin >> n;
    for (int i = n.size() - 1; i >= 0; i--) {
        if (n[i] != '0') {
            t = n.substr(0, i);
            cout << count(t.begin(), t.end(), '0');
            break;
        }
    }
    return 0;
}