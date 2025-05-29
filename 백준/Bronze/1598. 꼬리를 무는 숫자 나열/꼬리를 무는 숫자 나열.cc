#include <iostream>
using namespace std;
int main(void) {
    int a, b;
    cin >> a >> b;
    a -= 1, b -= 1;
    cout << (abs(a / 4 - b / 4) + abs(a % 4 - b % 4));
    return 0;
}