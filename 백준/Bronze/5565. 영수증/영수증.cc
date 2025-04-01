#include <iostream>
using namespace std;
int main(void) {
    int total, s = 0, elem;
    cin >> total;
    for (int i = 0; i < 9; i++) {
        cin >> elem;
        s += elem;
    }
    cout << total - s;
    return 0;
}