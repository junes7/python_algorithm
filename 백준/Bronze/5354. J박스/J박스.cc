#include <iostream>
using namespace std;
int main(void) {
    int t, n;
    string st;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            st = "#";
            for (int k = 0; k < n - 2; k++)
                st += (1 <= j && j <= n - 2) ? 'J' : '#';
            if (n > 1)
                st += '#';
            cout << st << "\n";
        }
        cout << "\n";
    }
    return 0;
}