#include <iostream>
using namespace std;
int main(void) {
    int m, d;
    cin >> m;
    cin >> d;
    if (m == 2)
        cout << (d == 18 ? "Special" : (d < 18 ? "Before" : "After"));
    else
        cout << (m < 2 ? "Before" : "After");
    return 0;
}