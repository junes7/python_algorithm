#include <iostream>
using namespace std;
int main(void) {
    int t;
    string t1, t2;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> t1 >> t2;
        cout << (t1 == t2 ? "OK" : "ERROR") << "\n";
    }
    return 0;
}