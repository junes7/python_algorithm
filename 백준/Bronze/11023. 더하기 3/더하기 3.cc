#include <iostream>
using namespace std;
int main(void) {
    int elem, s = 0;
    while (cin >> elem)
        s += elem;
    cout << s;
    return 0;
}