#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int n, i = 1;
    cin >> n;
    while (pow(i, 2) <= n)
        i++;
    cout << "The largest square has side length " << i - 1 << ".";
    return 0;
}