#include <iostream>
using namespace std;
int main(void) {
    int n, s;
    while (true) {
        cin >> n;
        if (n == 0) break;
        s = 0;
        for (int i = 1; i < n + 1; i++)
            s += i;
        cout << s << "\n";
    }
    return 0;
}