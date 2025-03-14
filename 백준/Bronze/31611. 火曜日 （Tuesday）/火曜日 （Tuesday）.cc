#include <iostream>
using namespace std;
int main(void) {
    int x;
    cin >> x;
    cout << ((1 + x) % 7 == 3 ? 1 : 0);
    return 0;
}