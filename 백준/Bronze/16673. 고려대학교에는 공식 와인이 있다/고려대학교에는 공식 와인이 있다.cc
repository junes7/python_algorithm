#include <iostream>
using namespace std;
int main(void) {
    int c, k, p, total = 0;
    cin >> c >> k >> p;
    for (int i = 1; i < c + 1; i++)
        total += k * i + p * i * i;
    cout << total;
    return 0;
}