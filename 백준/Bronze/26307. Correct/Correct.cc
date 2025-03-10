#include <iostream>
using namespace std;
int main(void) {
    int h, m;
    cin >> h >> m;
    cout << (h - 9) * 60 + m;
    return 0;
}