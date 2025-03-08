#include <iostream>
using namespace std;
int main(void) {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        for (int i = 1; i < n + 1; i++) {
            for (int j = 0; j < i; j++)
                cout << "*";
            cout << "\n";
        }
    }
    return 0;
}