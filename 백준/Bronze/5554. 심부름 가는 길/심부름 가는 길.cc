#include <iostream>
using namespace std;
int main(void) {
    int s = 0, elem;
    for (int i = 0; i < 4; i++) {
        cin >> elem;
        s += elem;
    }
    cout << s / 60 << "\n";
    cout << s % 60;
    return 0;
}