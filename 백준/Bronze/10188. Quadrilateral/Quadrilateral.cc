#include <iostream>
using namespace std;
int main(void) {
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < x; k++)
                cout << "X";
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}