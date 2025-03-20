#include <iostream>
using namespace std;
int main(void) {
    int n, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        s = i % 2 == 0 ? s + 3 : s - 2;
    cout << s;
    return 0;
}