#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string a, b, c;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;
    cin >> b;
    cin >> c;
    cout << stoi(a) + stoi(b) - stoi(c) << "\n";
    cout << stoi(a + b) - stoi(c) << "\n";
    return 0;
}