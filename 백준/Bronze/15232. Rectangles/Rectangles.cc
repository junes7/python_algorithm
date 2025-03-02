#include <iostream>
using namespace std;
int main(void) {
    int r, c;
    cin >> r;
    cin >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}