#include <iostream>
using namespace std;
int main(void) {
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << (x + y <= z + 0.5 ? 1 : 0);
    return 0;
}