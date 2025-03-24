#include <iostream>
using namespace std;
int main(void) {
    int n, m, t;
    cin >> n >> m;
    cout << (n < m ? n / 2 : m / 2);
    return 0;
}