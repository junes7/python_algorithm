#include <iostream>
using namespace std;
int main(void) {
    string st = "";
    int n;
    cin >> n;
    st += char('a' + (n % 8 == 0 ? 7 : n % 8 - 1));
    st += (n % 8 == 0 ? n / 8 : n / 8 + 1) + 48;
    cout << st;
    return 0;
}