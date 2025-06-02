#include <iostream>
using namespace std;
int main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(b - a - 1, c - b - 1);
    return 0;
}