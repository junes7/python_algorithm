#include <iostream>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    cout << int(n * 0.78) << ' ' << int(n - (n * 0.2) * 0.22);
    return 0;
}