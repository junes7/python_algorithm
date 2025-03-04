#include <iostream>
using namespace std;
int main(void) {
    int total, diff;
    cin >> total >> diff;
    if (total < diff || (total + diff) % 2 != 0)
        cout << -1;
    else
        cout << (total + diff) / 2 << ' ' << (total - diff) / 2;
    return 0;
}