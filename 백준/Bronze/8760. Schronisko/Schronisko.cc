#include <iostream>
using namespace std;
int main(void) {
    int Z, W, K;
    cin >> Z;
    for (int i = 0; i < Z; i++) {
        cin >> W >> K;
        cout << W * K / 2 << "\n";
    }
    return 0;
}