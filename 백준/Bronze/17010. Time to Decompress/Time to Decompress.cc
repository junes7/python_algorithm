#include <iostream>
using namespace std;
int main(void) {
    int L, n;
    char ch;
    cin >> L;
    for (int i = 0; i < L; i++) {
        cin >> n >> ch;
        for (int j = 0; j < n; j++)
            cout << ch;
        cout << "\n";
    }
    return 0;
}