#include <iostream>
using namespace std;
int main(void) {
    int m, row = 0, col = 0;
    cin >> m;
    while (true) {
        if (row < col)
            row += 1;
        else
            col += 1;
        if (row * col >= m) break;
    }
    cout << row << ' ' << col;
    return 0;
}