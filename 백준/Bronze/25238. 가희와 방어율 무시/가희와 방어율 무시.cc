#include <iostream>
using namespace std;
int main(void) {
    int a, b;
    double rlt;
    cin >> a >> b;
    rlt = a - a * b / 100.0;
    cout << (rlt < 100 ? 1 : 0);
    return 0;
}