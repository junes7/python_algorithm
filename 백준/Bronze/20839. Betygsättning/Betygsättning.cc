#include <iostream>
using namespace std;
int main(void) {
    int x, y, z, x1, y1, z1;
    cin >> x >> y >> z;
    cin >> x1 >> y1 >> z1;
    if (z1 == z)
        if (y1 < (y + 1) / 2)
            cout << "E";
        else if ((y + 1) / 2 <= y1 && y1 < y)
            cout << "D";
        else if (y1 == y) {
            if (x1 < (x + 1) / 2)
                cout << "C";
            else if ((x + 1) / 2 <= x1 && x1 < x)
                cout << "B";
            else if (x1 == x)
                cout << "A";
        }
    return 0;
}