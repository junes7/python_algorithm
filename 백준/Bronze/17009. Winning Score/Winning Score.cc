#include <iostream>
using namespace std;
int main(void) {
    int sA = 0, sB = 0, elem;
    for (int i = 0; i < 3; i++) {
        cin >> elem;
        sA += elem * (3 - i);
    }
    for (int i = 0; i < 3; i++) {
        cin >> elem;
        sB += elem * (3 - i);
    }
    cout << (sA == sB ? "T" : (sA > sB ? "A" : "B"));
    return 0;
}