#include <iostream>
using namespace std;
int main(void) {
    int A, P;
    cin >> A >> P;
    cout << (A * 7 == P * 13 ? "lika" : (A * 7 > P * 13 ? "Axel" : "Petra"));
    return 0;
}