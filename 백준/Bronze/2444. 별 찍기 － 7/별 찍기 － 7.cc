#include <iostream>
using namespace std;

int main(void) {
    int n, len;
    cin >> n;
    len = 2 * n - 1;
    for (int i = 0; i < len; i++) {
        if (i <= len / 2) {
            for (int j = 0; j < len / 2 - i; j++)
                cout << " ";
            for (int j = len / 2 - i; j < len - (len / 2 - i); j++)
                cout << "*";
        } else if (i > len / 2) {
            for (int j = 0; j < i - len / 2; j++)
                cout << " ";
            for (int j = i - len / 2; j < len + (len / 2 - i); j++)
                cout << "*";
        }
        if (i < len - 1)
            cout << endl;
    }
    return 0;
}