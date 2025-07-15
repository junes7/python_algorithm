#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    string a, b;
    int i = 1;
    while (1) {
        cin >> a >> b;
        if (a == "END" && b == "END") break;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cout << "Case " << i++ << ": " << (a == b ? "same" : "different") << "\n";
    }
    return 0;
}