#include <iostream>
using namespace std;
int main(void) {
    int a, b, i = 0;
    string st = "";
    cin >> a >> b;
    st += to_string(a / b) + ".";
    if (a % b) {
        while (a % b && i < 1000) {
            a = a % b * 10;
            i += 1;
            st += to_string(a / b);
        }
    }
    cout << st;
    return 0;
}