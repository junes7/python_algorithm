#include <iostream>
using namespace std;
int main(void) {
    int n, k;
    string st;
    cin >> n >> st >> k;
    if (st == "annyong") {
        cout << (k % 2 == 1 ? k : (k + 1 <= n ? k + 1 : k - 1));
    } else {
        cout << (k % 2 == 0 ? k : (k + 1 <= n ? k + 1 : k - 1));
    }
    return 0;
}