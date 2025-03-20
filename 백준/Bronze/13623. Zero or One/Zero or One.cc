#include <iostream>
using namespace std;
int main(void) {
    int A, B, C;
    cin >> A >> B >> C;
    if (A == B) {
        if (B == C) {
            cout << '*';
        } else {
            cout << 'C';
        }
    } else {
        if (B == C) {
            cout << 'A';
        } else {
            cout << 'B';
        }
    }
    return 0;
}