#include <iostream>
using namespace std;

int main(void) {
    int n, end, med;
    cin >> n;
    end = 2 * n - 1;
    med = end / 2;
    for (int i = 0; i < end; i++) {
        if (i <= med) {
            for (int j = 0; j < i; j++)
                cout << " ";
            for (int j = i; j < end - i; j++)
                cout << "*";
        } else {
            for (int j = 0; j < med * 2 - i; j++)
                cout << " ";
            for (int j = med * 2 - i; j < end - (med * 2 - i); j++)
                cout << "*";
        }
        cout << "\n";
    }
    return 0;
}