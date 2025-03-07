#include <iostream>
using namespace std;
int main(void) {
    int n, m;
    cin >> n >> m;
    cout << (n * 100 >= m ? "Yes" : "No");
    return 0;
}