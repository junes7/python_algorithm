#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int n, s = 0;
    cin >> n;
    for (int i = 1; i < n + 1; i++)
        s += pow(i, 3);
    cout << s;
    return 0;
}