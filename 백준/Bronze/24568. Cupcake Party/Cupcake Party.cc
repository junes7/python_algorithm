#include <iostream>
using namespace std;
int main(void) {
    int reg, small;
    cin >> reg;
    cin >> small;
    cout << reg * 8 + small * 3 - 28;
    return 0;
}