#include <iostream>
using namespace std;
int main(void) {
    int A, P, C;
    cin >> A >> P >> C;
    cout << (A + C > P ? A + C : P);
    return 0;
}