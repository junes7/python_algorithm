#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    st = "UOS";
    cout << st[(n - 1) % 3];
    return 0;
}