#include <iostream>
using namespace std;
int main(void) {
    int n, idx;
    cin >> n;
    string twelve = "ABCDEFGHIJKL", ten = "0123456789";
    idx = n + (2400 - 2013);
    cout << twelve[(idx + 5) % 12] << ten[(idx - 1) % 10];
    return 0;
}