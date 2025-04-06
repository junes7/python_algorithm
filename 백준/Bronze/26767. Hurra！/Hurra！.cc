#include <iostream>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        if (i % 7 == 0 && i % 11 != 0)
            cout << "Hurra!" << "\n";
        else if (i % 7 != 0 && i % 11 == 0)
            cout << "Super!" << "\n";
        else if (i % 7 == 0 && i % 11 == 0)
            cout << "Wiwat!" << "\n";
        else
            cout << i << "\n";
    }
    return 0;
}