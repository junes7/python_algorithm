#include <iostream>
using namespace std;
int main(void) {
    string a, b;
    cin >> a;
    cin >> b;
    cout << (a.size() < b.size() ? "no" : "go");
    return 0;
}