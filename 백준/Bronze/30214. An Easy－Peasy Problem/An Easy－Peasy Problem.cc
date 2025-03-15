#include <iostream>
using namespace std;
int main(void) {
    int S1, S2;
    cin >> S1 >> S2;
    cout << (S1 >= S2 / 2.0 ? "E" : "H");
    return 0;
}