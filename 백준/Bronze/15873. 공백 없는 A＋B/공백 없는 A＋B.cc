#include <iostream>
using namespace std;
int main(void) {
    string t;
    cin >> t;
    cout << stoi(t.substr(0, t[1] == '0' ? 2 : 1)) + stoi(t.substr(t[1] == '0' ? 2 : 1, t[1] == '0' ? t.size() - 2 : t.size() - 1));
    return 0;
}