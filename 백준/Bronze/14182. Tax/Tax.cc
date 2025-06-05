#include <iostream>
using namespace std;
int main(void) {
    int n;
    while (1) {
        cin >> n;
        if (n == 0) break;
        cout << fixed;
        cout.precision(0);  
        if (n <= 1000000) {
            cout << n * 1 << "\n";
        } else if (1000000 < n && n <= 5000000) {
            cout << n * 0.9 << "\n";
        } else {
            cout << n * 0.8 << "\n";
        }
    }
    return 0;
}