#include <iostream>
using namespace std;
int main(void) {
    int n, a, b;
    string st;
    cin >> n >> a >> b;
    if (b == a)
        st = "Anything";
    else if (b > a)
        st = "Bus";
    else
        st = "Subway";
    cout << st;
    return 0;
}