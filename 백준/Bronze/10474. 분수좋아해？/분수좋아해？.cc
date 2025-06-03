#include <iostream>
using namespace std;
int main(void) {
    int a, b;
    while (1) {
        cin >> a >> b;
        if (a == b && b == 0) break;
        cout << a / b << " " << a % b << " / " << b << "\n";
    }
    return 0;
}