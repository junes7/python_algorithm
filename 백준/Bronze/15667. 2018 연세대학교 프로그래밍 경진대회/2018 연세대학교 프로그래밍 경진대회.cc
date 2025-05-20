#include <iostream>
using namespace std;
int main(void) {
    int k;
    cin >> k;
    for (int i = 1; i < k + 1; i++) {
        if (1 + i + i * i == k) {
            cout << i;
            break;
        }
    }
    return 0;
}