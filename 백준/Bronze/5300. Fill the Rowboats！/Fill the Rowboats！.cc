#include <iostream>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        cout << i << ' ';
        if (i % 6 == 0 || i == n)
            cout << "Go!" << ' ';
    }
    return 0;
}