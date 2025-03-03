#include <iostream>
using namespace std;
int main(void) {
    int n;
    string pw;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> pw;
        cout << (6 <= pw.size() && pw.size() <= 9 ? "yes" : "no") << "\n";
    }
    return 0;
}