#include <iostream>
using namespace std;
int main(void) {
    int n, m;
    cin >> n >> m;
    cout << (n == m ? n + m : (n < m ? 2 * n + 1 : 2 * m + 1));
    return 0;
}