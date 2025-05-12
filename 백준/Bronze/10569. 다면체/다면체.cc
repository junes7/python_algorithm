#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, e, v;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> v >> e;
        cout << 2 + e - v << "\n";
    }
    return 0;
}